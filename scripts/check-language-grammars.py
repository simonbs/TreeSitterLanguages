#!/usr/bin/env python3
"""Check requested-language parsers and shipped highlight queries using a local runtime.

Usage: python3 scripts/check-language-grammars.py --runtime /path/to/tree-sitter
Requires Python 3 and a C compiler (CC, default clang); no Python dependencies.
Accepts either the Tree-sitter checkout or its lib directory. Build artifacts are
removed automatically. The runtime source is copied before building so concurrent
runtime edits cannot change different language builds in this invocation.

These tests check meaningful syntax and representative captures, including positive
and negative predicate matches. Each parser is compiled once for its fixtures.
Python evaluates the small eq?/match? predicate subset used here; this is not an integration test of Runestone's Swift evaluator,
NSRegularExpression dialect, theme rendering, or incremental editing.
"""

import argparse
import ctypes as C
import json
import os
from pathlib import Path
import re
import shlex
import shutil
import subprocess
import tempfile


# Expected and forbidden entries are (capture name, exact captured source text).
LANGUAGES = ("Nix", "XML")


class Node(C.Structure):
    _fields_ = [('context', C.c_uint32 * 4), ('id', C.c_void_p), ('tree', C.c_void_p)]


class Capture(C.Structure):
    _fields_ = [('node', Node), ('index', C.c_uint32)]


class Match(C.Structure):
    _fields_ = [('id', C.c_uint32), ('pattern_index', C.c_uint16),
                ('capture_count', C.c_uint16), ('captures', C.POINTER(Capture))]


class PredicateStep(C.Structure):
    _fields_ = [('type', C.c_int), ('value_id', C.c_uint32)]


def check(title, runtime, root, output, verbose, case):
    target = root / 'Sources' / ('TreeSitter' + title) / 'src'
    library = output / (title + '.so')
    compiler = shlex.split(os.environ.get('CC', 'clang'))
    flags = ['-fPIC', '-O0', '-std=c11', '-D_DEFAULT_SOURCE']
    runtime_includes = ['-I' + str(runtime / 'include'), '-I' + str(runtime / 'src')]
    if not library.exists():
        command = compiler + ['-shared'] + flags + runtime_includes + [
            '-I' + str(target), str(runtime / 'src/lib.c'),
        ] + [str(p) for p in sorted(target.rglob('*.c'))] + ['-o', str(library)]
        subprocess.run(command, check=True, capture_output=True, text=True)
    lib = C.CDLL(str(library))
    ptr, uint = C.c_void_p, C.c_uint32

    def bind(name, args, result):
        function = getattr(lib, name)
        function.argtypes, function.restype = args, result
        return function

    parser_new = bind('ts_parser_new', [], ptr)
    parser_delete = bind('ts_parser_delete', [ptr], None)
    parser_set_language = bind('ts_parser_set_language', [ptr, ptr], C.c_bool)
    parse = bind('ts_parser_parse_string', [ptr, ptr, C.c_char_p, uint], ptr)
    root_node = bind('ts_tree_root_node', [ptr], Node)
    has_error = bind('ts_node_has_error', [Node], C.c_bool)
    tree_delete = bind('ts_tree_delete', [ptr], None)
    node_start = bind('ts_node_start_byte', [Node], uint)
    node_end = bind('ts_node_end_byte', [Node], uint)
    query_new = bind('ts_query_new', [ptr, C.c_char_p, uint, C.POINTER(uint), C.POINTER(C.c_int)], ptr)
    query_delete = bind('ts_query_delete', [ptr], None)
    pattern_count = bind('ts_query_pattern_count', [ptr], uint)
    predicate_steps = bind('ts_query_predicates_for_pattern', [ptr, uint, C.POINTER(uint)], C.POINTER(PredicateStep))
    string_value = bind('ts_query_string_value_for_id', [ptr, uint, C.POINTER(uint)], ptr)
    capture_name = bind('ts_query_capture_name_for_id', [ptr, uint, C.POINTER(uint)], ptr)
    cursor_new = bind('ts_query_cursor_new', [], ptr)
    cursor_delete = bind('ts_query_cursor_delete', [ptr], None)
    cursor_exec = bind('ts_query_cursor_exec', [ptr, ptr, Node], None)
    next_match = bind('ts_query_cursor_next_match', [ptr, C.POINTER(Match)], C.c_bool)
    language = bind('tree_sitter_' + title.lower(), [], ptr)()
    parser, tree, query, cursor = parser_new(), None, None, None
    try:
        assert parser_set_language(parser, language), 'runtime rejects grammar ABI'
        source = case['source']
        expected = {tuple(pair) for pair in case['expected']}
        forbidden = {tuple(pair) for pair in case['forbidden']}
        source = source.encode('utf-8')
        tree = parse(parser, None, source, len(source))
        assert tree, 'parser returned no tree'
        node = root_node(tree)
        assert not has_error(node), f"{case['name']}: sample contains ERROR or missing nodes"
        query_source = (root / 'Sources' / ('TreeSitter' + title + 'Queries') / 'highlights.scm').read_bytes()
        offset, error = uint(), C.c_int()
        query = query_new(language, query_source, len(query_source), C.byref(offset), C.byref(error))
        assert query, f'query error {error.value} at byte {offset.value}'

        def query_text(function, index):
            length = uint()
            value = function(query, index, C.byref(length))
            return C.string_at(value, length.value).decode('utf-8')

        # Inspect every pattern, including patterns that do not match this fixture.
        # Tree-sitter itself does not execute these application-level predicates.
        predicates = []
        for index in range(pattern_count(query)):
            count = uint()
            steps = predicate_steps(query, index, C.byref(count))
            pattern, current = [], []
            for step in steps[:count.value]:
                if step.type == 0:
                    assert current and current[0][0] == 2, 'invalid predicate operator'
                    operator = query_text(string_value, current[0][1])
                    assert operator in {'eq?', 'not-eq?', 'match?', 'not-match?', 'set!'}, f'unsupported Runestone predicate: {operator}'
                    if operator != 'set!':
                        assert len(current) == 3 and current[1][0] == 1 and current[2][0] == 2, f'unhandled predicate arguments: {operator}'
                        operand = query_text(string_value, current[2][1])
                        if 'match?' in operator:
                            operand = re.compile(operand)
                        pattern.append((operator, current[1][1], operand))
                    current = []
                else:
                    current.append((step.type, step.value_id))
            assert not current, 'unterminated predicate'
            predicates.append(pattern)

        actual = set()
        cursor = cursor_new()
        cursor_exec(cursor, query, node)
        match = Match()
        while next_match(cursor, C.byref(match)):
            captures = list(match.captures[:match.capture_count])
            values = {}
            for capture in captures:
                text = source[node_start(capture.node):node_end(capture.node)].decode('utf-8')
                values.setdefault(capture.index, []).append(text)
            accepted = True
            for operator, capture_id, operand in predicates[match.pattern_index]:
                texts = values.get(capture_id, [])
                assert texts, 'predicate references absent capture'
                results = [bool(operand.search(text)) if 'match?' in operator else text == operand for text in texts]
                if operator.startswith('not-'):
                    results = [not result for result in results]
                accepted = accepted and all(results)
            if accepted:
                for index, texts in values.items():
                    actual.update((query_text(capture_name, index), text) for text in texts)
        assert expected <= actual, f'missing captures: {sorted(expected - actual)}; actual: {sorted(actual)}'
        assert not forbidden & actual, f'incorrect predicate captures: {sorted(forbidden & actual)}'
        if verbose:
            for capture in sorted(actual):
                print(f'  {capture}')
        print(f"{title}/{case['name']}: PASS (parse, query predicates, {len(expected)} expected captures, {len(forbidden)} excluded captures)")
    finally:
        if cursor:
            cursor_delete(cursor)
        if query:
            query_delete(query)
        if tree:
            tree_delete(tree)
        parser_delete(parser)


def main():
    arguments = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    arguments.add_argument('--runtime', required=True, type=Path)
    arguments.add_argument('--language', action='append', choices=LANGUAGES, help='limit checks; repeat for multiple languages')
    arguments.add_argument('--verbose', action='store_true')
    options = arguments.parse_args()
    runtime = options.runtime.resolve()
    if (runtime / 'lib/src/lib.c').exists():
        runtime = runtime / 'lib'
    if not (runtime / 'src/lib.c').is_file():
        arguments.error('--runtime must contain lib/src/lib.c or src/lib.c')
    root = Path(__file__).resolve().parents[1]
    failures = []
    with tempfile.TemporaryDirectory(prefix='language-grammar-checks-') as temporary:
        output = Path(temporary)
        shutil.copytree(runtime, output / 'runtime')
        for title in options.language or LANGUAGES:
            try:
                fixtures = json.loads((root / 'Tests/Requested' / (title + '.json')).read_text())
                for case in fixtures:
                    check(title, output / 'runtime', root, output, options.verbose, case)
            except (AssertionError, OSError, subprocess.CalledProcessError) as error:
                failures.append(title)
                print(f'{title}: FAIL: {error}')
                if isinstance(error, subprocess.CalledProcessError):
                    print(error.stderr)
    if failures:
        raise SystemExit('Failed languages: ' + ', '.join(failures))


if __name__ == '__main__':
    main()
