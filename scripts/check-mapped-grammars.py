#!/usr/bin/env python3
"""Verify all mapped grammar tables and loader failures on both Mac architectures."""

import argparse
import json
import hashlib
import platform
import subprocess
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--architectures', nargs='+', choices=('arm64', 'x86_64'), default=[platform.machine()])
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    entries = json.loads((root / 'MappedGrammars.json').read_text())
    work = root / '.build/mapped-verification'
    work.mkdir(parents=True, exist_ok=True)
    short_file = work / 'truncated.tables'
    short_file.write_bytes(b'bad')
    for entry in entries:
        source = root / 'Sources' / entry['module'] / 'src'
        target = root / 'Sources' / entry['target'] / 'src'
        resource = root / 'Sources/MappedTreeSitterLanguages/Tables' / (entry['resource'] + '.tables')
        assert hashlib.sha256(resource.read_bytes()).hexdigest() == entry['sha256']
        invalid = work / 'invalid.tables'
        with invalid.open('wb') as f: f.truncate(entry['bytes'])
        function = entry['function']
        body = f'''#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#define {function} {function}_baseline
#include "parser.c"
#undef {function}
const TSLanguage *{function}_from_file(const char *);
static const char *resource;
static void *verify(void *unused) {{
    const TSLanguage *before = {function}_baseline();
    const TSLanguage *after = {function}_from_file(resource);
    assert(after);
    assert(before->state_count == after->state_count);
    assert(before->symbol_count == after->symbol_count);
    assert(before->large_state_count == after->large_state_count);
    assert(memcmp(before->parse_table, after->parse_table, sizeof(ts_parse_table)) == 0);
    assert(memcmp(before->small_parse_table, after->small_parse_table, sizeof(ts_small_parse_table)) == 0);
    assert(memcmp(before->small_parse_table_map, after->small_parse_table_map, sizeof(ts_small_parse_table_map)) == 0);
    assert(memcmp(before->parse_actions, after->parse_actions, sizeof(ts_parse_actions)) == 0);
    assert(munmap((void *)((const uint8_t *)after->parse_table - {entry['offsets'][0][0]}), {entry['bytes']}) == 0);
    free((void *)after);
    return NULL;
}}
int main(int argc, char **argv) {{
    assert(argc == 5);
    resource = argv[1];
    assert({function}_from_file(NULL) == NULL);
    assert({function}_from_file(argv[2]) == NULL);
    assert({function}_from_file(argv[3]) == NULL);
    assert({function}_from_file(argv[4]) == NULL);
    pthread_t threads[8];
    for (int i = 0; i < 8; i++) assert(pthread_create(&threads[i], NULL, verify, NULL) == 0);
    for (int i = 0; i < 8; i++) assert(pthread_join(threads[i], NULL) == 0);
    puts("{entry['module']}: exact table parity across eight concurrent loads, failed loads rejected");
}}
'''
        test = work / (entry['module'] + '.c')
        test.write_text(body)
        scanners = sorted(path for path in target.rglob('*.c') if path.name != 'parser.c')
        native_scanners = [source / path.relative_to(target) for path in scanners]
        for architecture in args.architectures:
            binary = work / (entry['module'] + '-' + architecture)
            subprocess.run(['xcrun', 'clang', '-w', '-arch', architecture, '-Os', '-I', source,
                            target / 'parser.c', *scanners, *native_scanners, test, '-o', binary], check=True)
            subprocess.run(['arch', '-' + architecture, binary,
                            resource, short_file, work / 'missing.tables', invalid], check=True)
    print(f'{len(entries)} grammars verified on {', '.join(args.architectures)}.')


if __name__ == '__main__':
    main()
