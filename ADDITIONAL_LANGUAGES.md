# Additional adopted languages

These 10 grammars add established programming languages, shells, templates, and project formats. They are independent of the Clojure, Fortran, Kotlin, Nix, Org, PowerShell, and XML additions and the existing Nim pull request.

## Runtime compatibility

Several generated parsers use ABI 15. This package pins the merged Runestone Tree-sitter 0.27.1 migration at `31f640bf39917d1e5fd8e6bf1b065e42b0e57c4a`; Runestone 0.4.1 / Tree-sitter 0.20.9 cannot load all of them. Before publishing a new semantic-versioned package release, replace this revision requirement with a released Runestone version containing that migration. App consumers must resolve the same Runestone revision.

## Pinned sources

Parser/scanner sources and private headers are vendored from the following revisions. Public headers only forward-declare `TSLanguage`. All license notices are retained in `Licenses/Additional` and must accompany redistribution.

| Product suffix | Upstream | Revision | Parser license |
|---|---|---|---|
| Bicep | [tree-sitter-grammars/tree-sitter-bicep](https://github.com/tree-sitter-grammars/tree-sitter-bicep) | [`bff59884307c`](https://github.com/tree-sitter-grammars/tree-sitter-bicep/tree/bff59884307c0ab009bd5e81afd9324b46a6c0f9) | MIT |
| CMake | [uyha/tree-sitter-cmake](https://github.com/uyha/tree-sitter-cmake) | [`58993af75218`](https://github.com/uyha/tree-sitter-cmake/tree/58993af75218bc99a1f5a04c832a5937e7c422cb) | MIT |
| Dart | [UserNobody14/tree-sitter-dart](https://github.com/UserNobody14/tree-sitter-dart) | [`0038280b774b`](https://github.com/UserNobody14/tree-sitter-dart/tree/0038280b774b65c1b89ba7fec50624d8baed9fe1) | MIT |
| Fish | [ram02z/tree-sitter-fish](https://github.com/ram02z/tree-sitter-fish) | [`b7f1d682941e`](https://github.com/ram02z/tree-sitter-fish/tree/b7f1d682941e0c62dfcd6bf9ef481638351bab16) | Unlicense |
| Glimmer | [ember-tooling/tree-sitter-glimmer](https://github.com/ember-tooling/tree-sitter-glimmer) | [`c67a73679db2`](https://github.com/ember-tooling/tree-sitter-glimmer/tree/c67a73679db2945a686ca45d3e5318d86138e72a) | MIT |
| HCL | [tree-sitter-grammars/tree-sitter-hcl](https://github.com/tree-sitter-grammars/tree-sitter-hcl) | [`64ad62785d44`](https://github.com/tree-sitter-grammars/tree-sitter-hcl/tree/64ad62785d442eb4d45df3a1764962dafd5bc98b) | Apache-2.0 |
| ObjectiveC | [tree-sitter-grammars/tree-sitter-objc](https://github.com/tree-sitter-grammars/tree-sitter-objc) | [`181a81b8f23a`](https://github.com/tree-sitter-grammars/tree-sitter-objc/tree/181a81b8f23a2d593e7ab4259981f50122909fda) | MIT |
| Pascal | [Isopod/tree-sitter-pascal](https://github.com/Isopod/tree-sitter-pascal) | [`042119eca2e1`](https://github.com/Isopod/tree-sitter-pascal/tree/042119eca2e18a60e56317fb06ee3ba5c32cb447) | MIT |
| Proto | [coder3101/tree-sitter-proto](https://github.com/coder3101/tree-sitter-proto) | [`18366491f37d`](https://github.com/coder3101/tree-sitter-proto/tree/18366491f37d43d6d5d02cbb1e79b650b5728145) | MIT |
| Scala | [tree-sitter/tree-sitter-scala](https://github.com/tree-sitter/tree-sitter-scala) | [`c76bab0092b6`](https://github.com/tree-sitter/tree-sitter-scala/tree/c76bab0092b622e34df4916d80b117436683d16e) | MIT |

Each suffix provides `TreeSitter<suffix>`, `TreeSitter<suffix>Queries`, and `TreeSitter<suffix>Runestone`, following the existing package API. For example, import `TreeSitterHCLRunestone` and use `TreeSitterLanguage.hcl`.

## Queries and limitations

The queries are syntax-highlighting queries, not language servers or semantic validators. Editor-only predicates are translated when Runestone can express equivalent behavior. Capture names are mapped to existing theme categories. Unsupported scope-analysis heuristics are replaced or omitted as documented below, rather than making every identifier match.

### Bicep

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-bicep/blob/bff59884307c0ab009bd5e81afd9324b46a6c0f9/queries/highlights.scm) at `bff59884307c0ab009bd5e81afd9324b46a6c0f9`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions.
- Notices: [Bicep-LICENSE.txt](Licenses/Additional/Bicep-LICENSE.txt).

### CMake

- Queries: [queries/highlights.scm](https://github.com/uyha/tree-sitter-cmake/blob/58993af75218bc99a1f5a04c832a5937e7c422cb/queries/highlights.scm) at `58993af75218bc99a1f5a04c832a5937e7c422cb`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions.
- Notices: [CMake-LICENSE.txt](Licenses/Additional/CMake-LICENSE.txt).

### Dart

- Queries: [queries/highlights.scm](https://github.com/UserNobody14/tree-sitter-dart/blob/0038280b774b65c1b89ba7fec50624d8baed9fe1/queries/highlights.scm) at `0038280b774b65c1b89ba7fec50624d8baed9fe1`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Dart.txt](Licenses/Additional/Dart.txt).

### Fish

- Queries: [queries/highlights.scm](https://github.com/ram02z/tree-sitter-fish/blob/b7f1d682941e0c62dfcd6bf9ef481638351bab16/queries/highlights.scm) at `b7f1d682941e0c62dfcd6bf9ef481638351bab16`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Notices: [Fish-LICENSE](Licenses/Additional/Fish-LICENSE).

### Glimmer

- Queries: [queries/glimmer/highlights.scm](https://github.com/ember-tooling/tree-sitter-glimmer/blob/c67a73679db2945a686ca45d3e5318d86138e72a/queries/glimmer/highlights.scm) at `c67a73679db2945a686ca45d3e5318d86138e72a`.
- Queries: [queries/glimmer/injections.scm](https://github.com/ember-tooling/tree-sitter-glimmer/blob/c67a73679db2945a686ca45d3e5318d86138e72a/queries/glimmer/injections.scm) at `c67a73679db2945a686ca45d3e5318d86138e72a`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Use direct language captures for injection regions; omit unsupported combined/include-children flags.
- Notices: [Glimmer-LICENSE.md](Licenses/Additional/Glimmer-LICENSE.md).

### HCL

- Queries: [runtime/queries/hcl/highlights.scm](https://github.com/nvim-treesitter/nvim-treesitter/blob/a2f694478be07f89c2d03cc17858a8745a400c4b/runtime/queries/hcl/highlights.scm) at `a2f694478be07f89c2d03cc17858a8745a400c4b`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions.
- Notices: [HCL-LICENSE.txt](Licenses/Additional/HCL-LICENSE.txt), [HCL-Queries.txt](Licenses/Additional/HCL-Queries.txt).

### ObjectiveC

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-objc/blob/181a81b8f23a2d593e7ab4259981f50122909fda/queries/highlights.scm) at `181a81b8f23a2d593e7ab4259981f50122909fda`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Inlined existing Runestone C highlight queries (base repository revision 9adbb839524e47e0eee8803f8e02d81b78ad1847).
- Replaced unsupported has-ancestor? identifier heuristic with structural struct-field declarator captures; intentionally avoids treating arbitrary expressions/types within a struct as properties.
- Converted any-of? to anchored match? alternations, retaining exact string membership.
- Notices: [ObjectiveC-BaseC.txt](Licenses/Additional/ObjectiveC-BaseC.txt), [ObjectiveC.txt](Licenses/Additional/ObjectiveC.txt).

### Pascal

- Queries: [queries/highlights.scm](https://github.com/Isopod/tree-sitter-pascal/blob/042119eca2e18a60e56317fb06ee3ba5c32cb447/queries/highlights.scm) at `042119eca2e18a60e56317fb06ee3ba5c32cb447`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Pascal.txt](Licenses/Additional/Pascal.txt).

### Proto

- Queries: [queries/highlights.scm](https://github.com/coder3101/tree-sitter-proto/blob/18366491f37d43d6d5d02cbb1e79b650b5728145/queries/highlights.scm) at `18366491f37d43d6d5d02cbb1e79b650b5728145`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions.
- Notices: [Proto-LICENSE.txt](Licenses/Additional/Proto-LICENSE.txt).

### Scala

- Queries: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-scala/blob/c76bab0092b622e34df4916d80b117436683d16e/queries/highlights.scm) at `c76bab0092b622e34df4916d80b117436683d16e`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Scala.txt](Licenses/Additional/Scala.txt).

## Integration checks

Run `python3 Tests/Compatibility/test.py /path/to/tree-sitter` against Tree-sitter 0.27.1. The existing CI job runs both original grammar checks and the additional capture-level checks. For a focused check, run `python3 Tests/Additional/test.py --runtime /path/to/tree-sitter --language Dart`.

The additional fixtures verify clean sample parsing, highlight-query compilation, supported predicate operators/arguments, representative positive captures, negative predicate cases, and template injection captures. The Python evaluator checks the supported predicate subset; Runestone Editor integration tests additionally exercise the actual Swift evaluator and syntax highlighter. These checks do not establish full language conformance.
