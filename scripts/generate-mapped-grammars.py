#!/usr/bin/env python3
"""Generate grammar targets that share read-only tables between both Mac architectures."""

import argparse
import hashlib
import json
import os
import platform
import re
import subprocess
from pathlib import Path

TABLES = {
    "ts_parse_table": ("parse_table", "uint16_t"),
    "ts_small_parse_table": ("small_parse_table", "uint16_t"),
    "ts_small_parse_table_map": ("small_parse_table_map", "uint32_t"),
    "ts_parse_actions": ("parse_actions", "TSParseActionEntry"),
}


def write(path, text):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text)


def export(source, output, architecture):
    exporter = output / "export.c"
    statements = []
    for name in TABLES:
        statements.append(f'''
    while (offset % 8) {{ putchar(0); offset++; }}
    fprintf(stderr, "%zu %zu\\n", offset, sizeof({name}));
    if (fwrite({name}, sizeof({name}), 1, stdout) != 1) return 1;
    offset += sizeof({name});''')
    write(exporter, '#include <stdio.h>\n#include "parser.c"\nint main(void) {\n'
          '    size_t offset = 0;\n' + ''.join(statements) + '\n    return fflush(stdout) != 0;\n}\n')
    binary = output / f"export-{architecture}"
    scanners = sorted(p for p in source.rglob('*.c') if p.name != 'parser.c')
    subprocess.run(['xcrun', 'clang', '-w', '-arch', architecture, '-Os', '-I', source,
                    exporter, *scanners, '-o', binary], check=True)
    result = subprocess.run(['arch', '-' + architecture, binary], check=True, capture_output=True)
    return result.stdout, [tuple(map(int, line.split())) for line in result.stderr.splitlines()]


def transform(code, function, offsets, size, header):
    for name, (field, _) in TABLES.items():
        code, count = re.subn(
            rf'^static (?:const )?\w+ {name}\[[^\n]* = \{{\n.*?^\}};\n', '', code,
            flags=re.MULTILINE | re.DOTALL)
        line = re.compile(rf'^\s*\.{field}\s*=[^,\n]*\b{name}\b[^,\n]*,\s*$', re.MULTILINE)
        code, fields = line.subn('', code)
        if count != 1 or fields != 1:
            raise ValueError(f'Unexpected table declaration or initializer in {function}: {name}')
    signature = re.compile(r'\b' + re.escape(function) + r'\((?:void)?\)\s*\{')
    code, count = signature.subn(function + '_from_file(const char *path) {', code)
    if count != 1 or code.count('return &language;') != 1:
        raise ValueError(f'Unexpected constructor for {function}')
    assignments = '\n'.join(
        f'  language_copy->{field} = (const {ctype} *)(tables + {offset});'
        for (_, (field, ctype)), (offset, _) in zip(TABLES.items(), offsets)
    )
    header_values = ", ".join(str(byte) for byte in header)
    replacement = f'''_Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != {size}) {{
    close(fd);
    return NULL;
  }}
  const uint8_t *tables = mmap(NULL, {size}, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = {{ {header_values} }};
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {{
    munmap((void *)tables, {size});
    return NULL;
  }}
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {{
    munmap((void *)tables, {size});
    return NULL;
  }}
  *language_copy = language;
{assignments}
  return language_copy;'''
    code = code.replace('return &language;', replacement)
    return '#include <string.h>\n#include <fcntl.h>\n#include <stdlib.h>\n#include <sys/mman.h>\n#include <sys/stat.h>\n#include <unistd.h>\n' + code


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', action='store_true', help='Verify committed generated sources and resources')
    parser.add_argument("--architectures", nargs="+", choices=("arm64", "x86_64"), default=[platform.machine()])
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    output = root / '.build/mapped-generation'
    output.mkdir(parents=True, exist_ok=True)
    modules = sorted(p.name for p in (root / 'Sources').glob('TreeSitter*')
                     if (p / 'src/parser.c').is_file()
                     and p.name not in ('TreeSitterMarkdown', 'TreeSitterMarkdownInline'))
    # Markdown's independent native products stay available to consumers.
    resources = root / 'Sources/MappedTreeSitterLanguages/Tables'
    swift = ['import Foundation\n']
    properties, cases, switches, targets, inventory = [], [], [], [], []
    aliases = {'c_sharp': 'cSharp', 'javascript': 'javaScript', 'typescript': 'typeScript', 'objc': 'objectiveC'}
    exclusions = {'TreeSitterComment': ['src/tree_sitter_comment/chars.c', 'src/tree_sitter_comment/parser.c'],
                  'TreeSitterYAML': ['src/schema.core.c', 'src/schema.json.c', 'src/schema.legacy.c']}
    generated = {}
    for module in modules:
        original = root / 'Sources' / module
        source = original / 'src'
        code = (source / 'parser.c').read_text()
        function = re.search(r'const TSLanguage\s*\*\s*(tree_sitter_\w+)\((?:void)?\)\s*\{', code)[1]
        work = output / module
        work.mkdir(parents=True, exist_ok=True)
        arm_data, offsets = export(source, work, args.architectures[0])
        for architecture in args.architectures[1:]:
            other_data, other_offsets = export(source, work, architecture)
            if arm_data != other_data or offsets != other_offsets:
                raise ValueError(f'{module} tables differ between architectures')
        header = b'TSMAP001' + hashlib.sha256(code.encode()).digest() + bytes(24)
        arm_data = header + arm_data
        offsets = [(offset + len(header), size) for offset, size in offsets]
        digest = hashlib.sha256(arm_data).hexdigest()
        name = function.removeprefix('tree_sitter_')
        case = aliases.get(name, name)
        resource = name + '-' + digest[:16]
        generated[resources / (resource + '.tables')] = arm_data
        target_name = 'Mapped' + module
        target = root / 'Sources' / target_name
        scanner_text = code + ''.join(path.read_text() for path in source.rglob('*.c') if path.name != 'parser.c')
        scanner_symbols = sorted(set(re.findall(r'\btree_sitter_\w+_external_scanner_\w+\b', scanner_text)))
        scanner_defines = ''.join(f'#define {symbol} mapped_{symbol}\n' for symbol in scanner_symbols)
        generated[target / 'src/parser.c'] = (scanner_defines + transform(code, function, offsets, len(arm_data), header)).encode()
        for scanner in source.rglob('*.c'):
            relative = str(scanner.relative_to(original))
            if scanner.name == 'parser.c' or relative in exclusions.get(module, []):
                continue
            wrapper = target / relative
            include = os.path.relpath(scanner, wrapper.parent)
            generated[wrapper] = (scanner_defines + '#include "' + include + '"\n').encode()
        generated[target / 'include/public.h'] = ('#include <stddef.h>\nstruct TSLanguage;\n'
              f'const struct TSLanguage *{function}_from_file(const char *path);\n').encode()
        targets.append(f'        .target(name: "{target_name}", cSettings: [.headerSearchPath("../{module}/src")])')
        swift.append(f'import {target_name}\n')
        properties.append(f'    static let {case}: OpaquePointer? = load("{resource}", {function}_from_file)\n')
        cases.append(f'        case {case}\n')
        switches.append(f'        case .{case}: return Languages.{case}\n')
        inventory.append(dict(module=module, target=target_name, function=function, grammar=case, resource=resource,
                              bytes=len(arm_data), sha256=digest, offsets=offsets,
                              source_sha256=hashlib.sha256(code.encode()).hexdigest()))
        print(f'{module}: {len(arm_data):,} bytes verified on {", ".join(args.architectures)}', flush=True)
    swift.append('\n/// Grammars whose immutable parse tables are mapped from package resources on first use.\n')
    swift.append('/// Returned pointers remain valid for the process lifetime. A resource or allocation failure returns nil.\n')
    swift.append('public enum MappedTreeSitterLanguages {\n    public enum Grammar: String, CaseIterable {\n')
    swift.extend(cases)
    swift.append('    }\n\n    public static func language(_ grammar: Grammar) -> OpaquePointer? {\n        switch grammar {\n')
    swift.extend(switches)
    swift.append('        }\n    }\n}\n\nprivate enum Languages {\n')
    swift.append('''    static func load(_ name: String, _ constructor: (UnsafePointer<CChar>?) -> OpaquePointer?) -> OpaquePointer? {
        guard let url = Bundle.module.url(forResource: name, withExtension: "tables", subdirectory: "Tables") else {
            return nil
        }
        return url.withUnsafeFileSystemRepresentation { constructor($0) }
    }
''')
    swift.extend(properties)
    swift.append('}\n')
    generated[root / 'Sources/MappedTreeSitterLanguages/MappedTreeSitterLanguages.swift'] = ''.join(swift).encode()
    generated[root / 'MappedGrammars.json'] = (json.dumps(inventory, indent=2) + '\n').encode()
    for path, data in generated.items():
        if args.check:
            if not path.is_file() or path.read_bytes() != data:
                raise ValueError(f'Stale generated file: {path.relative_to(root)}')
        else:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data)
    expected_resources = {path for path in generated if path.suffix == '.tables'}
    for path in resources.glob('*.tables'):
        if path not in expected_resources:
            if args.check:
                raise ValueError(f'Obsolete table resource: {path.relative_to(root)}')
            path.unlink()
    manifest = root / 'Package.swift'
    text = manifest.read_text()
    start = text.index('        // BEGIN MAPPED GRAMMAR TARGETS')
    end = text.index('        // END MAPPED GRAMMAR TARGETS', start)
    block = '        // BEGIN MAPPED GRAMMAR TARGETS\n'
    block += ',\n'.join(targets) + ',\n'
    block += '        .target(name: "MappedTreeSitterLanguages", dependencies: [\n'
    block += ',\n'.join('            "' + e['target'] + '"' for e in inventory)
    block += '\n        ], resources: [.copy("Tables")]),\n'
    text = text[:start] + block + text[end:]
    if args.check:
        if manifest.read_text() != text:
            raise ValueError("Stale mapped target declarations in Package.swift")
    else:
        manifest.write_text(text)
    total = sum(entry['bytes'] for entry in inventory)
    print(f'{len(inventory)} grammars. Shared tables {total:,} bytes ({total / 1048576:.3f} MiB).')


if __name__ == '__main__':
    main()
