#!/usr/bin/env python3
"""Regression for OCaml scanner stack exhaustion; requires a local Tree-sitter runtime."""
import argparse
import os
from pathlib import Path
import shlex
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]
arguments = argparse.ArgumentParser(description=__doc__)
arguments.add_argument('--runtime', required=True, type=Path)
arguments.add_argument('--grammar', type=Path, default=ROOT / 'Sources/TreeSitterOCaml/src',
                       help='Optional parser source directory for verifying an older scanner fails')
options = arguments.parse_args()
runtime = options.runtime / 'lib' if (options.runtime / 'lib/src/lib.c').exists() else options.runtime
with tempfile.TemporaryDirectory(prefix='ocaml-nested-comments-') as temporary:
    output = Path(temporary)
    sources = [runtime / 'src/lib.c', options.grammar / 'parser.c']
    sources += [p for p in options.grammar.glob('scanner.*') if p.suffix in ('.c', '.cc', '.cpp')]
    sources.append(Path(__file__).with_name('OCamlNestedComments.c'))
    objects = []
    for index, source in enumerate(sources):
        cxx = source.suffix in ('.cc', '.cpp')
        compiler = shlex.split(os.environ.get('CXX' if cxx else 'CC', 'clang++' if cxx else 'clang'))
        obj = output / f'{index}.o'
        subprocess.run(compiler + ['-O0', '-std=c++14' if cxx else '-std=c11', '-D_DEFAULT_SOURCE',
                                  '-I' + str(runtime / 'include'), '-I' + str(runtime / 'src'),
                                  '-I' + str(options.grammar), '-c', str(source), '-o', str(obj)], check=True)
        objects.append(str(obj))
    executable = output / 'nested-comments'
    subprocess.run(shlex.split(os.environ.get('CXX', 'clang++')) + objects + ['-pthread', '-o', str(executable)], check=True)
    subprocess.run([str(executable)], check=True, timeout=15)
