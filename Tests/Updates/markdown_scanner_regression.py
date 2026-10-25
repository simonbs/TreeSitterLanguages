#!/usr/bin/env python3
"""Run Markdown scanner bounds/incremental regression with AddressSanitizer.

Usage: python3 Tests/Updates/markdown_scanner_regression.py --runtime /path/to/tree-sitter
A 30-second execution deadline catches pathological scanner loops without claiming
microbenchmark stability. No artifacts are written into the repository.
"""
import argparse
import os
from pathlib import Path
import shlex
import subprocess
import tempfile

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--runtime', required=True, type=Path)
args = parser.parse_args()
runtime = args.runtime.resolve()
if (runtime / 'lib/src/lib.c').exists():
    runtime /= 'lib'
root = Path(__file__).resolve().parents[2]
with tempfile.TemporaryDirectory(prefix='markdown-scanner-regression-') as temp:
    out = Path(temp)
    common = shlex.split(os.environ.get('CC', 'clang')) + ['-g', '-O1', '-std=c11',
        '-D_DEFAULT_SOURCE', '-fsanitize=address', '-fno-omit-frame-pointer',
        '-I' + str(runtime / 'include'), '-I' + str(runtime / 'src')]
    sources = [(runtime / 'src/lib.c', runtime / 'src'),
        (root / 'Tests/Updates/MarkdownScannerRegression.c', runtime / 'src')]
    for language in ['Markdown', 'MarkdownInline']:
        src = root / ('Sources/TreeSitter' + language + '/src')
        sources.extend((src / file, src) for file in ['parser.c', 'scanner.c'])
    objects = []
    for index, (source, include) in enumerate(sources):
        obj = out / (str(index) + '.o')
        subprocess.run(common + ['-I' + str(include), '-c', str(source), '-o', str(obj)], check=True)
        objects.append(str(obj))
    binary = out / 'regression'
    subprocess.run(common + objects + ['-o', str(binary)], check=True)
    subprocess.run([str(binary)], check=True, timeout=30)
