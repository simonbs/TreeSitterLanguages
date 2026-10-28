#!/usr/bin/env python3
"""Compile and execute every bundled folding query against its shipped grammar.

Uses the repository's existing native parser/query harness and sample fixtures.
This verifies query compatibility, not Runestone's folding presentation or its
application-level predicate/directive evaluation.
"""
import argparse
import concurrent.futures
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import re
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--runtime', required=True, type=Path)
    parser.add_argument('--build-directory', type=Path)
    parser.add_argument('--language', action='append')
    args = parser.parse_args()
    runtime = args.runtime.resolve()
    if (runtime / 'lib').is_dir():
        runtime /= 'lib'
    spec = importlib.util.spec_from_file_location('compatibility', ROOT / 'Tests/Compatibility/test.py')
    compatibility = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(compatibility)
    samples = dict(compatibility.SAMPLES)
    for directory in ['Updates', 'Additional', 'Requested']:
        for path in (ROOT / 'Tests' / directory).glob('*.json'):
            case = json.loads(path.read_text())
            if isinstance(case, list):
                case = case[0]
            samples[path.stem] = case.get('source', case.get('sample'))
    queries = sorted((ROOT / 'Sources').glob('TreeSitter*Queries/folds.scm'))
    if args.language:
        queries = [path for path in queries if path.parent.name[10:-7] in args.language]
        if len(queries) != len(set(args.language)):
            raise ValueError('Requested language has no folding query')
    with tempfile.TemporaryDirectory(prefix='treesitter-folding-') as temporary:
        build = args.build_directory or Path(temporary)
        build.mkdir(parents=True, exist_ok=True)
        cc, cxx = os.environ.get('CC', 'clang'), os.environ.get('CXX', 'clang++')
        include_digests = {}

        def include_digest(directory):
            if directory not in include_digests:
                content = b''.join(path.read_bytes() for path in sorted(directory.rglob('*.h')))
                # The runtime's lib.c includes its implementation sources directly.
                if directory == runtime / 'src':
                    content += b''.join(path.read_bytes() for path in sorted(directory.rglob('*.c')))
                include_digests[directory] = hashlib.sha256(content).digest()
            return include_digests[directory]

        def compile_object(source, target, includes, factory=None):
            compiler = cxx if source.suffix in ['.cc', '.cpp'] else cc
            command = [compiler, '-std=c++14' if compiler == cxx else '-std=c11', '-w',
                       '-D_DEFAULT_SOURCE', *[flag for path in includes for flag in ['-I', str(path)]]]
            if factory:
                command.append('-DTEST_LANGUAGE=' + factory)
            command += ['-c', str(source), '-o', str(target)]
            fingerprint = hashlib.sha256(source.read_bytes() + repr(command).encode()
                                         + b''.join(include_digest(path) for path in includes)).hexdigest()
            stamp = target.with_suffix('.sha256')
            if not target.exists() or not stamp.exists() or stamp.read_text() != fingerprint:
                subprocess.run(command, check=True, capture_output=True, text=True)
                stamp.write_text(fingerprint)

        runtime_object = build / 'runtime.o'
        compile_object(runtime / 'src/lib.c', runtime_object, [runtime / 'include', runtime / 'src'])

        def check(path):
            language = path.parent.name[10:-7]
            target = ROOT / 'Sources' / ('TreeSitter' + language)
            factory = re.search(r'\b(tree_sitter_\w+)\(void\)', (target / 'include/public.h').read_text())[1]
            includes = [target / 'src', runtime / 'include']
            objects = [runtime_object]
            sources = [target / 'src/parser.c']
            sources += [p for p in sorted((target / 'src').glob('scanner.*')) if p.suffix in ['.c', '.cc', '.cpp']]
            sources += [ROOT / 'Tests/Compatibility/test.c']
            for index, source in enumerate(sources):
                obj = build / (language + '-' + str(index) + '.o')
                compile_object(source, obj, includes, factory)
                objects.append(obj)
            executable = build / language
            subprocess.run([cxx, *map(str, objects), '-o', str(executable)], check=True, capture_output=True, text=True)
            subprocess.run([str(executable), samples[language], str(path)], check=True, capture_output=True, text=True)
            text = path.read_text()
            if re.search(r'^\s*;+\s*inherits:', text, re.M):
                raise ValueError('Unresolved inheritance in ' + language)
            directives = set(re.findall(r'\(#([\w!?-]+)', text))
            if directives - {'trim!', 'not-has-parent?', 'eq?', 'not-eq?', 'match?', 'not-match?', 'set!'}:
                raise ValueError('Unsupported folding directive: ' + repr(directives))
            return language + ': PASS (native parser and folding query)'

        failures = []
        with concurrent.futures.ThreadPoolExecutor(max_workers=4) as executor:
            futures = {executor.submit(check, path): path for path in queries}
            for future in concurrent.futures.as_completed(futures):
                try:
                    print(future.result(), flush=True)
                except Exception as error:
                    failures.append(futures[future].parent.name)
                    print(str(error), flush=True)
                    if isinstance(error, subprocess.CalledProcessError):
                        print(error.stderr, flush=True)
        if failures:
            raise SystemExit('Folding query failures: ' + ', '.join(failures))
        print(f'All {len(queries)} folding queries passed.')


if __name__ == '__main__':
    main()
