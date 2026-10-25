#!/usr/bin/env python3
"""Run Jsonnet scanner isolation/reset regressions against a local Tree-sitter checkout."""
import argparse
import os
from pathlib import Path
import shlex
import subprocess
import tempfile

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--runtime', type=Path, required=True)
args = parser.parse_args()
root = Path(__file__).resolve().parents[2]
runtime = args.runtime.resolve()
if (runtime / 'lib/src/lib.c').exists():
    runtime /= 'lib'
source = root / 'Sources/TreeSitterJsonnet/src'
with tempfile.TemporaryDirectory(prefix='jsonnet-scanner-test-') as temporary:
    executable = Path(temporary) / 'test'
    command = shlex.split(os.environ.get('CC', 'clang')) + [
        '-std=c11', '-D_DEFAULT_SOURCE', '-I' + str(runtime / 'include'),
        '-I' + str(runtime / 'src'), '-I' + str(source),
        str(runtime / 'src/lib.c'), str(source / 'parser.c'), str(source / 'scanner.c'),
        str(root / 'Tests/Additional/JsonnetScannerTests.c'), '-o', str(executable),
    ]
    subprocess.run(command, check=True)
    subprocess.run([str(executable)], check=True)
