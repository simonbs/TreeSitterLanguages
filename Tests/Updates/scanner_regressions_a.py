#!/usr/bin/env python3
"""Run Lua state isolation and Ruby serialization bounds regressions with sanitizers.

Use --runtime /path/to/tree-sitter; optional repeated --language Lua/Ruby.
The shared update fixture runner can import run(language, runtime, output).
"""
import argparse
import os
from pathlib import Path
import shlex
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]

def run(language, runtime, output):
    if language not in ('Lua', 'Ruby'):
        return
    runtime = Path(runtime)
    if (runtime / 'lib/src/lib.c').exists():
        runtime /= 'lib'
    source = ROOT / 'Tests/Updates' / ('lua_scanner_state.c' if language == 'Lua' else 'ruby_scanner_bounds.c')
    executable = Path(output) / (language + '-scanner-regression')
    command = shlex.split(os.environ.get('CC', 'clang')) + ['-std=c11', '-D_DEFAULT_SOURCE', '-g', '-O1',
        '-fsanitize=address,undefined', '-fno-omit-frame-pointer',
        '-I' + str(runtime / 'include'), '-I' + str(runtime / 'src'),
        '-I' + str(ROOT / 'Sources' / ('TreeSitter' + language) / 'src'), str(source)]
    if language == 'Lua':
        command += [str(runtime / 'src/lib.c'), str(ROOT / 'Sources/TreeSitterLua/src/parser.c')]
    subprocess.run(command + ['-o', str(executable)], check=True)
    subprocess.run([str(executable)], check=True)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--runtime', required=True, type=Path)
    parser.add_argument('--language', action='append', choices=['Lua', 'Ruby'])
    options = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='runestone-scanner-regressions-') as temporary:
        for language in options.language or ['Lua', 'Ruby']:
            run(language, options.runtime, Path(temporary))
