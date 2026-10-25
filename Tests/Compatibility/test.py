#!/usr/bin/env python3
"""Compile the shipped grammars and check them against a Tree-sitter checkout."""
import concurrent.futures
import os
from pathlib import Path
import re
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[2]
SAMPLES = {
    "Astro": "<h1>Hello</h1>",
    "Bash": "echo hello\n",
    "C": "int main(void) { return 0; }",
    "Comment": "TODO: example",
    "CSharp": "class Example { int value = 1; }",
    "CPP": "int main() { return 0; }",
    "CSS": "body { color: red; }",
    "Elixir": "value = 1\n",
    "Elm": "module Main exposing (value)\nvalue = 1\n",
    "Go": "package main\nfunc main() {}\n",
    "Haskell": "value = 1\n",
    "HTML": "<p>Hello</p>",
    "Java": "class Example { int value = 1; }",
    "JavaScript": "const value = 1;",
    "JSDoc": "/**\n * @param {string} value\n */",
    "JSON": '{"value": 1}',
    "JSON5": "{value: 1}",
    "Julia": "value = 1\n",
    "LaTeX": "\\section{Hello}\n",
    "Lua": "local value = 1\n",
    "Markdown": "# Hello\n\nSome **text**.\n",
    "MarkdownInline": "Some **text**.",
    "OCaml": "let value = 1\n",
    "Perl": "my $value = 1;\n",
    "PHP": "<?php $value = 1; ?>",
    "Python": "value = 1\n",
    "R": "value <- 1\n",
    "Regex": "[a-z]+",
    "Ruby": "value = 1\n",
    "Rust": "fn main() { let value = 1; }",
    "SCSS": "body { color: red; }",
    "SQL": "SELECT value FROM example;",
    "Svelte": "<h1>Hello</h1>",
    "Swift": "let value = 1\n",
    "TOML": "value = 1\n",
    "TSX": "const value = <h1>Hello</h1>;",
    "TypeScript": "const value: number = 1;",
    "YAML": "value: 1\n",
}


def run(command):
    subprocess.run([str(arg) for arg in command], check=True, cwd=ROOT)


def main():
    if len(sys.argv) < 2:
        sys.exit("Usage: python3 Tests/Compatibility/test.py /path/to/tree-sitter [Language ...]")
    runtime = Path(sys.argv[1]).resolve() / "lib"
    samples = {name: SAMPLES[name] for name in sys.argv[2:]} if len(sys.argv) > 2 else SAMPLES
    cc = os.environ.get("CC", "clang")
    cxx = os.environ.get("CXX", "clang++")
    with tempfile.TemporaryDirectory(prefix="treesitter-compatibility-") as temporary:
        build = Path(temporary)
        runtime_object = build / "runtime.o"
        run([cc, "-std=c11", "-D_DEFAULT_SOURCE", "-I", runtime / "include", "-I", runtime / "src",
             "-c", runtime / "src/lib.c", "-o", runtime_object])

        def test_language(item):
            name, sample = item
            target = ROOT / "Sources" / f"TreeSitter{name}"
            directory = build / name
            directory.mkdir()
            public_header = (target / "include/public.h").read_text()
            factory = re.search(r"\b(tree_sitter_\w+)\(void\)", public_header).group(1)
            sources = [target / "src/parser.c"]
            sources += [p for p in sorted((target / "src").glob("scanner.*")) if p.suffix in (".c", ".cc", ".cpp")]
            objects = [runtime_object]
            for index, source in enumerate(sources + [ROOT / "Tests/Compatibility/test.c"]):
                obj = directory / f"{index}.o"
                compiler = cxx if source.suffix in (".cc", ".cpp") else cc
                standard = "-std=c++14" if compiler == cxx else "-std=c11"
                run([compiler, standard, "-w", "-I", target / "src", "-I", runtime / "include",
                     f"-DTEST_LANGUAGE={factory}", "-c", source, "-o", obj])
                objects.append(obj)
            executable = directory / "test"
            run([cxx, *objects, "-o", executable])
            queries = sorted((ROOT / "Sources" / f"TreeSitter{name}Queries").glob("*.scm"))
            inherited = {"CPP": ["C/highlights"],
                         "TSX": ["JavaScript/highlights", "JavaScript/highlights-jsx"],
                         "TypeScript": ["JavaScript/highlights"]}.get(name, [])
            if inherited:
                combined = directory / "combined-highlights.scm"
                combined.write_text("\n".join(
                    (ROOT / "Sources" / f"TreeSitter{language}Queries" / f"{query}.scm").read_text()
                    for language, query in [part.split("/") for part in inherited] + [[name, "highlights"]]
                ))
                queries.append(combined)
            run([executable, sample, *queries])
            return f"{name}: parsed sample and executed {len(queries)} queries"

        failures = []
        with concurrent.futures.ThreadPoolExecutor(max_workers=4) as executor:
            futures = {executor.submit(test_language, item): item[0] for item in samples.items()}
            for future in concurrent.futures.as_completed(futures):
                try:
                    print(future.result(), flush=True)
                except Exception as error:
                    failures.append(futures[future])
                    print(f"{futures[future]}: {error}", file=sys.stderr, flush=True)
        if failures:
            sys.exit(f"Failed: {', '.join(sorted(failures))}")
        print(f"All {len(samples)} languages passed.")
    if len(sys.argv) == 2:
        run([sys.executable, ROOT / "Tests/Updates/test.py", "--runtime", runtime])
        for script in ["markdown_scanner_regression.py", "test-ocaml-comments.py", "scanner_regressions_a.py"]:
            run([sys.executable, ROOT / "Tests/Updates" / script, "--runtime", runtime])
        run([sys.executable, ROOT / "Tests/Additional/test.py", "--runtime", runtime])


if __name__ == "__main__":
    main()
