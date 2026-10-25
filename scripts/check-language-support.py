#!/usr/bin/env python3
"""Guard the all-language product's dependencies, exports and consumer coverage.

Reads the repository's explicit manifest declarations and ("name", .factory)
consumer fixtures. Requires only Python; does not build or resolve dependencies.
"""
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
UMBRELLA = 'RunestoneLanguageSupport'
CONSUMER = 'RunestoneLanguageSupportTests'


def clean(source):
    # Preserve strings; commented-out imports/fixtures cannot satisfy coverage.
    tokens = r'"(?:\\.|[^"\\])*"|//[^\n]*|/\*.*?\*/'
    return re.sub(tokens, lambda m: m[0] if m[0].startswith('"') else ' ', source, flags=re.S)


def equal(label, expected, actual):
    expected, actual = set(expected), list(actual)
    if expected != set(actual) or len(actual) != len(set(actual)):
        raise ValueError(f'{label}: missing {sorted(expected - set(actual))}; '
                         f'unexpected {sorted(set(actual) - expected)}; duplicates {len(actual) - len(set(actual))}')


def check(root):
    manifest = clean((root / 'Package.swift').read_text())
    wrappers = set(re.findall(r'\.target\(\s*name:\s*"(TreeSitter\w+Runestone)"', manifest))
    if not wrappers:
        raise ValueError('No language wrapper targets found')
    for kind, name, expected in [('target', UMBRELLA, wrappers),
                                  ('testTarget', CONSUMER, {UMBRELLA, 'Runestone'})]:
        pattern = r'\.' + kind + r'\(\s*name:\s*"' + name + r'",\s*dependencies:\s*\[([^]]*)\]'
        match = re.search(pattern, manifest)
        if not match:
            raise ValueError(f'Missing explicit dependency array for {name}')
        equal(name + ' dependencies', expected, re.findall(r'"([^"]+)"', match[1]))
    if not re.search(r'\.library\(name:\s*"' + UMBRELLA + r'",\s*targets:\s*\["' + UMBRELLA + r'"\]\)', manifest):
        raise ValueError('Missing umbrella library product')
    source = '\n'.join(clean(p.read_text()) for p in (root / 'Sources' / UMBRELLA).glob('*.swift'))
    equal('Umbrella exports', wrappers, re.findall(r'^\s*@_exported\s+import\s+(\w+)\s*$', source, re.M))

    factories = set()
    for name in sorted(wrappers):
        source = '\n'.join(clean(p.read_text()) for p in (root / 'Sources' / name).glob('*.swift'))
        # All wrapper factories follow the public extension TreeSitterLanguage convention.
        members = re.findall(r'\bstatic\s+var\s+(\w+)\s*:\s*TreeSitterLanguage\s*\{', source)
        if not members or factories.intersection(members) or len(members) != len(set(members)):
            raise ValueError(f'Missing or duplicate factories in {name}')
        factories.update(members)
    source = '\n'.join(clean(p.read_text()) for p in (root / 'Tests' / CONSUMER).glob('*.swift'))
    equal('Consumer imports', {UMBRELLA, 'Runestone', 'XCTest'},
          re.findall(r'^\s*(?:@testable\s+)?import\s+(\w+)\s*$', source, re.M))
    if re.search(r'@testable\s+import\s+' + UMBRELLA, source):
        raise ValueError('Consumer must exercise the public umbrella import')
    equal('Consumer factory coverage', factories,
          re.findall(r'\(\s*"[^"\n]+"\s*,\s*(?:TreeSitterLanguage)?\.(\w+)\s*\)', source))
    print(f'Language support: PASS ({len(wrappers)} wrappers, {len(factories)} factories; dependency/export/consumer parity)')


if __name__ == '__main__':
    try:
        check(ROOT)
    except (ValueError, OSError) as error:
        sys.exit(f'Language support: FAIL: {error}')
