# Additional adopted languages

These 30 grammars add established programming languages, shells, templates, and project formats. They are independent of the Clojure, Fortran, Kotlin, Nix, Org, PowerShell, and XML additions and the existing Nim pull request.

## Runtime compatibility

Several generated parsers use ABI 15. This package pins the merged Runestone Tree-sitter 0.27.1 migration at `31f640bf39917d1e5fd8e6bf1b065e42b0e57c4a`; Runestone 0.4.1 / Tree-sitter 0.20.9 cannot load all of them. Before publishing a new semantic-versioned package release, replace this revision requirement with a released Runestone version containing that migration. App consumers must resolve the same Runestone revision.

## Pinned sources

Parser/scanner sources and private headers are vendored from the following revisions. Public headers only forward-declare `TSLanguage`. All license notices are retained in `Licenses/Additional` and must accompany redistribution.

| Product suffix | Upstream | Revision | Parser license |
|---|---|---|---|
| AWK | [Beaglefoot/tree-sitter-awk](https://github.com/Beaglefoot/tree-sitter-awk) | [`34bbdc7cce8e`](https://github.com/Beaglefoot/tree-sitter-awk/tree/34bbdc7cce8e803096f47b625979e34c1be38127) | MIT |
| Bicep | [tree-sitter-grammars/tree-sitter-bicep](https://github.com/tree-sitter-grammars/tree-sitter-bicep) | [`bff59884307c`](https://github.com/tree-sitter-grammars/tree-sitter-bicep/tree/bff59884307c0ab009bd5e81afd9324b46a6c0f9) | MIT |
| CMake | [uyha/tree-sitter-cmake](https://github.com/uyha/tree-sitter-cmake) | [`58993af75218`](https://github.com/uyha/tree-sitter-cmake/tree/58993af75218bc99a1f5a04c832a5937e7c422cb) | MIT |
| CUE | [cue-lang/tree-sitter-cue](https://github.com/cue-lang/tree-sitter-cue) | [`ba4356732fcf`](https://github.com/cue-lang/tree-sitter-cue/tree/ba4356732fcf8b203f7f98cfb6e70390d5dc1da8) | MIT |
| D | [gdamore/tree-sitter-d](https://github.com/gdamore/tree-sitter-d) | [`64f27931b4e6`](https://github.com/gdamore/tree-sitter-d/tree/64f27931b4e6fdd75af1102c79bacbca68a8dacc) | MIT |
| Dart | [UserNobody14/tree-sitter-dart](https://github.com/UserNobody14/tree-sitter-dart) | [`0038280b774b`](https://github.com/UserNobody14/tree-sitter-dart/tree/0038280b774b65c1b89ba7fec50624d8baed9fe1) | MIT |
| Dockerfile | [camdencheek/tree-sitter-dockerfile](https://github.com/camdencheek/tree-sitter-dockerfile) | [`971acdd90856`](https://github.com/camdencheek/tree-sitter-dockerfile/tree/971acdd908568b4531b0ba28a445bf0bb720aba5) | MIT |
| Erlang | [WhatsApp/tree-sitter-erlang](https://github.com/WhatsApp/tree-sitter-erlang) | [`62c82e67b73e`](https://github.com/WhatsApp/tree-sitter-erlang/tree/62c82e67b73e13f3ef06e4c8c07ff035a8235d30) | Apache-2.0 |
| Fish | [ram02z/tree-sitter-fish](https://github.com/ram02z/tree-sitter-fish) | [`b7f1d682941e`](https://github.com/ram02z/tree-sitter-fish/tree/b7f1d682941e0c62dfcd6bf9ef481638351bab16) | Unlicense |
| Glimmer | [ember-tooling/tree-sitter-glimmer](https://github.com/ember-tooling/tree-sitter-glimmer) | [`c67a73679db2`](https://github.com/ember-tooling/tree-sitter-glimmer/tree/c67a73679db2945a686ca45d3e5318d86138e72a) | MIT |
| GraphQL | [bkegley/tree-sitter-graphql](https://github.com/bkegley/tree-sitter-graphql) | [`5e66e961eee4`](https://github.com/bkegley/tree-sitter-graphql/tree/5e66e961eee421786bdda8495ed1db045e06b5fe) | MIT |
| Groovy | [murtaza64/tree-sitter-groovy](https://github.com/murtaza64/tree-sitter-groovy) | [`2a6ddd558b6a`](https://github.com/murtaza64/tree-sitter-groovy/tree/2a6ddd558b6aa39c5b77d8db9fe9baf817486b2c) | MIT |
| HCL | [tree-sitter-grammars/tree-sitter-hcl](https://github.com/tree-sitter-grammars/tree-sitter-hcl) | [`64ad62785d44`](https://github.com/tree-sitter-grammars/tree-sitter-hcl/tree/64ad62785d442eb4d45df3a1764962dafd5bc98b) | Apache-2.0 |
| Jinja | [cathaysia/tree-sitter-jinja](https://github.com/cathaysia/tree-sitter-jinja) | [`c213d3745ccd`](https://github.com/cathaysia/tree-sitter-jinja/tree/c213d3745ccdcaaa858869181c7b1bf9557a025f) | Apache-2.0 |
| Jsonnet | [sourcegraph/tree-sitter-jsonnet](https://github.com/sourcegraph/tree-sitter-jsonnet) | [`ddd075f1939a`](https://github.com/sourcegraph/tree-sitter-jsonnet/tree/ddd075f1939aed8147b7aa67f042eda3fce22790) | MIT |
| KDL | [tree-sitter-grammars/tree-sitter-kdl](https://github.com/tree-sitter-grammars/tree-sitter-kdl) | [`e8ff98a113e1`](https://github.com/tree-sitter-grammars/tree-sitter-kdl/tree/e8ff98a113e175b84b92ec2096820517c1e10a66) | MIT |
| Liquid | [hankthetank27/tree-sitter-liquid](https://github.com/hankthetank27/tree-sitter-liquid) | [`e45dbac8c5fa`](https://github.com/hankthetank27/tree-sitter-liquid/tree/e45dbac8c5fa95b1f0e00e7e0c04bc8855823391) | MIT |
| MATLAB | [acristoffers/tree-sitter-matlab](https://github.com/acristoffers/tree-sitter-matlab) | [`f03d0347acd8`](https://github.com/acristoffers/tree-sitter-matlab/tree/f03d0347acd8bb05d4edd8c845ac1718729e1fad) | MIT |
| Make | [tree-sitter-grammars/tree-sitter-make](https://github.com/tree-sitter-grammars/tree-sitter-make) | [`70613f3d812c`](https://github.com/tree-sitter-grammars/tree-sitter-make/tree/70613f3d812cbabbd7f38d104d60a409c4008b43) | MIT |
| ObjectiveC | [tree-sitter-grammars/tree-sitter-objc](https://github.com/tree-sitter-grammars/tree-sitter-objc) | [`181a81b8f23a`](https://github.com/tree-sitter-grammars/tree-sitter-objc/tree/181a81b8f23a2d593e7ab4259981f50122909fda) | MIT |
| Pascal | [Isopod/tree-sitter-pascal](https://github.com/Isopod/tree-sitter-pascal) | [`042119eca2e1`](https://github.com/Isopod/tree-sitter-pascal/tree/042119eca2e18a60e56317fb06ee3ba5c32cb447) | MIT |
| Proto | [coder3101/tree-sitter-proto](https://github.com/coder3101/tree-sitter-proto) | [`18366491f37d`](https://github.com/coder3101/tree-sitter-proto/tree/18366491f37d43d6d5d02cbb1e79b650b5728145) | MIT |
| RON | [tree-sitter-grammars/tree-sitter-ron](https://github.com/tree-sitter-grammars/tree-sitter-ron) | [`78938553b930`](https://github.com/tree-sitter-grammars/tree-sitter-ron/tree/78938553b93075e638035f624973083451b29055) | MIT OR Apache-2.0 |
| Scala | [tree-sitter/tree-sitter-scala](https://github.com/tree-sitter/tree-sitter-scala) | [`c76bab0092b6`](https://github.com/tree-sitter/tree-sitter-scala/tree/c76bab0092b622e34df4916d80b117436683d16e) | MIT |
| Starlark | [tree-sitter-grammars/tree-sitter-starlark](https://github.com/tree-sitter-grammars/tree-sitter-starlark) | [`a453dbf3ba43`](https://github.com/tree-sitter-grammars/tree-sitter-starlark/tree/a453dbf3ba433db0e5ec621a38a7e59d72e4dc69) | MIT |
| Tcl | [tree-sitter-grammars/tree-sitter-tcl](https://github.com/tree-sitter-grammars/tree-sitter-tcl) | [`850a72ab6436`](https://github.com/tree-sitter-grammars/tree-sitter-tcl/tree/850a72ab6436e06645b33b11cfa60cbdb04b1f01) | MIT |
| Twig | [gbprod/tree-sitter-twig](https://github.com/gbprod/tree-sitter-twig) | [`2208d2a3c3ee`](https://github.com/gbprod/tree-sitter-twig/tree/2208d2a3c3ee7ef378e97df2e51c18feb7ee9dfc) | MIT |
| Vim | [tree-sitter-grammars/tree-sitter-vim](https://github.com/tree-sitter-grammars/tree-sitter-vim) | [`039c8d0aa1de`](https://github.com/tree-sitter-grammars/tree-sitter-vim/tree/039c8d0aa1deae00ddeb0374dd70bcc0ec56938d) | MIT |
| Vue | [tree-sitter-grammars/tree-sitter-vue](https://github.com/tree-sitter-grammars/tree-sitter-vue) | [`ce8011a414fd`](https://github.com/tree-sitter-grammars/tree-sitter-vue/tree/ce8011a414fdf8091f4e4071752efc376f4afb08) | MIT |
| Zig | [tree-sitter-grammars/tree-sitter-zig](https://github.com/tree-sitter-grammars/tree-sitter-zig) | [`6479aa13f32f`](https://github.com/tree-sitter-grammars/tree-sitter-zig/tree/6479aa13f32f701c383083d8b28360ebd682fb7d) | MIT |

Each suffix provides `TreeSitter<suffix>`, `TreeSitter<suffix>Queries`, and `TreeSitter<suffix>Runestone`, following the existing package API. For example, import `TreeSitterHCLRunestone` and use `TreeSitterLanguage.hcl`.

## Queries and limitations

The queries are syntax-highlighting queries, not language servers or semantic validators. Editor-only predicates are translated when Runestone can express equivalent behavior. Capture names are mapped to existing theme categories. Unsupported scope-analysis heuristics are replaced or omitted as documented below, rather than making every identifier match.

### AWK

- Queries: [queries/highlights.scm](https://github.com/Beaglefoot/tree-sitter-awk/blob/34bbdc7cce8e803096f47b625979e34c1be38127/queries/highlights.scm) at `34bbdc7cce8e803096f47b625979e34c1be38127`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Notices: [AWK-LICENSE](Licenses/Additional/AWK-LICENSE).

### Bicep

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-bicep/blob/bff59884307c0ab009bd5e81afd9324b46a6c0f9/queries/highlights.scm) at `bff59884307c0ab009bd5e81afd9324b46a6c0f9`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [Bicep-LICENSE.txt](Licenses/Additional/Bicep-LICENSE.txt).

### CMake

- Queries: [queries/highlights.scm](https://github.com/uyha/tree-sitter-cmake/blob/58993af75218bc99a1f5a04c832a5937e7c422cb/queries/highlights.scm) at `58993af75218bc99a1f5a04c832a5937e7c422cb`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [CMake-LICENSE.txt](Licenses/Additional/CMake-LICENSE.txt).

### CUE

- Queries: [queries/highlights.scm](https://github.com/cue-lang/tree-sitter-cue/blob/ba4356732fcf8b203f7f98cfb6e70390d5dc1da8/queries/highlights.scm) at `ba4356732fcf8b203f7f98cfb6e70390d5dc1da8`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [CUE-LICENSE.txt](Licenses/Additional/CUE-LICENSE.txt).

### D

- Queries: [queries/highlights.scm](https://github.com/gdamore/tree-sitter-d/blob/64f27931b4e6fdd75af1102c79bacbca68a8dacc/queries/highlights.scm) at `64f27931b4e6fdd75af1102c79bacbca68a8dacc`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Upstream nested comments limited to five levels; inline assembly parsed as token stream.
- Notices: [D.txt](Licenses/Additional/D.txt).

### Dart

- Queries: [queries/highlights.scm](https://github.com/UserNobody14/tree-sitter-dart/blob/0038280b774b65c1b89ba7fec50624d8baed9fe1/queries/highlights.scm) at `0038280b774b65c1b89ba7fec50624d8baed9fe1`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Dart.txt](Licenses/Additional/Dart.txt).

### Dockerfile

- Queries: [queries/highlights.scm](https://github.com/camdencheek/tree-sitter-dockerfile/blob/971acdd908568b4531b0ba28a445bf0bb720aba5/queries/highlights.scm) at `971acdd908568b4531b0ba28a445bf0bb720aba5`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Shell command regions use Bash highlighting for the default POSIX shell; custom SHELL directives are not interpreted.
- Notices: [Dockerfile-LICENSE.txt](Licenses/Additional/Dockerfile-LICENSE.txt).

### Erlang

- Queries: [queries/highlights.scm](https://github.com/WhatsApp/tree-sitter-erlang/blob/62c82e67b73e13f3ef06e4c8c07ff035a8235d30/queries/highlights.scm) at `62c82e67b73e13f3ef06e4c8c07ff035a8235d30`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Erlang.txt](Licenses/Additional/Erlang.txt).

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

### GraphQL

- Queries: [queries/graphql/highlights.scm](https://github.com/bkegley/tree-sitter-graphql/blob/5e66e961eee421786bdda8495ed1db045e06b5fe/queries/graphql/highlights.scm) at `5e66e961eee421786bdda8495ed1db045e06b5fe`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [GraphQL-LICENSE.txt](Licenses/Additional/GraphQL-LICENSE.txt).

### Groovy

- Queries: [queries/highlights.scm](https://github.com/murtaza64/tree-sitter-groovy/blob/2a6ddd558b6aa39c5b77d8db9fe9baf817486b2c/queries/highlights.scm) at `2a6ddd558b6aa39c5b77d8db9fe9baf817486b2c`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Groovy.txt](Licenses/Additional/Groovy.txt).

### HCL

- Queries: [runtime/queries/hcl/highlights.scm](https://github.com/nvim-treesitter/nvim-treesitter/blob/a2f694478be07f89c2d03cc17858a8745a400c4b/runtime/queries/hcl/highlights.scm) at `a2f694478be07f89c2d03cc17858a8745a400c4b`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [HCL-LICENSE.txt](Licenses/Additional/HCL-LICENSE.txt), [HCL-Queries.txt](Licenses/Additional/HCL-Queries.txt).

### Jinja

- Queries: [tree-sitter-jinja/queries/highlights.scm](https://github.com/cathaysia/tree-sitter-jinja/blob/c213d3745ccdcaaa858869181c7b1bf9557a025f/tree-sitter-jinja/queries/highlights.scm) at `c213d3745ccdcaaa858869181c7b1bf9557a025f`.
- Queries: [tree-sitter-jinja_inline/queries/highlights.scm](https://github.com/cathaysia/tree-sitter-jinja/blob/c213d3745ccdcaaa858869181c7b1bf9557a025f/tree-sitter-jinja_inline/queries/highlights.scm) at `c213d3745ccdcaaa858869181c7b1bf9557a025f`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Use direct language captures for injection regions; omit unsupported combined/include-children flags.
- Add HTML injections for content nodes; omit the unavailable optional jinja_inline grammar injection.
- Use upstream jinja_inline default identifier styling so template variables are highlighted, with specific later function/member rules retaining precedence.
- HTML content segments are injected individually; Runestone does not combine disjoint regions, so HTML spanning template boundaries may be incomplete.
- The optional upstream # line-statement syntax requires the separate jinja_inline grammar and is not injected; normal block and expression syntax is supported.
- Notices: [Jinja-LICENSE](Licenses/Additional/Jinja-LICENSE).

### Jsonnet

- Queries: [runtime/queries/jsonnet/highlights.scm](https://github.com/nvim-treesitter/nvim-treesitter/blob/a2f694478be07f89c2d03cc17858a8745a400c4b/runtime/queries/jsonnet/highlights.scm) at `a2f694478be07f89c2d03cc17858a8745a400c4b`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [Jsonnet-LICENSE.txt](Licenses/Additional/Jsonnet-LICENSE.txt), [Jsonnet-Queries.txt](Licenses/Additional/Jsonnet-Queries.txt).

### KDL

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-kdl/blob/e8ff98a113e175b84b92ec2096820517c1e10a66/queries/highlights.scm) at `e8ff98a113e175b84b92ec2096820517c1e10a66`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [KDL-LICENSE.txt](Licenses/Additional/KDL-LICENSE.txt).

### Liquid

- Queries: [queries/highlights.scm](https://github.com/hankthetank27/tree-sitter-liquid/blob/e45dbac8c5fa95b1f0e00e7e0c04bc8855823391/queries/highlights.scm) at `e45dbac8c5fa95b1f0e00e7e0c04bc8855823391`.
- Queries: [queries/injections.scm](https://github.com/hankthetank27/tree-sitter-liquid/blob/e45dbac8c5fa95b1f0e00e7e0c04bc8855823391/queries/injections.scm) at `e45dbac8c5fa95b1f0e00e7e0c04bc8855823391`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Use direct language captures for injection regions; omit unsupported combined/include-children flags.
- HTML content segments are injected individually; Runestone does not combine disjoint regions, so HTML spanning template boundaries may be incomplete.
- Notices: [Liquid-LICENSE](Licenses/Additional/Liquid-LICENSE).

### MATLAB

- Queries: [queries/helix/highlights.scm](https://github.com/acristoffers/tree-sitter-matlab/blob/f03d0347acd8bb05d4edd8c845ac1718729e1fad/queries/helix/highlights.scm) at `f03d0347acd8bb05d4edd8c845ac1718729e1fad`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Upstream documents tokenization ambiguity for 1./a without spaces; .m also used by Objective-C.
- Notices: [MATLAB.txt](Licenses/Additional/MATLAB.txt).

### Make

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-make/blob/70613f3d812cbabbd7f38d104d60a409c4008b43/queries/highlights.scm) at `70613f3d812cbabbd7f38d104d60a409c4008b43`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Shell command regions use Bash highlighting for the default POSIX shell; custom SHELL directives are not interpreted.
- Notices: [Make-LICENSE.txt](Licenses/Additional/Make-LICENSE.txt).

### ObjectiveC

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-objc/blob/181a81b8f23a2d593e7ab4259981f50122909fda/queries/highlights.scm) at `181a81b8f23a2d593e7ab4259981f50122909fda`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Inlined existing Runestone C highlight queries (base repository revision 9adbb839524e47e0eee8803f8e02d81b78ad1847).
- Replaced unsupported has-ancestor? identifier heuristic with structural struct-field declarator captures; intentionally avoids treating arbitrary expressions/types within a struct as properties.
- Converted any-of? to anchored match? alternations, retaining exact string membership.
- Notices: [ObjectiveC-BaseC.txt](Licenses/Additional/ObjectiveC-BaseC.txt).

### Pascal

- Queries: [queries/highlights.scm](https://github.com/Isopod/tree-sitter-pascal/blob/042119eca2e18a60e56317fb06ee3ba5c32cb447/queries/highlights.scm) at `042119eca2e18a60e56317fb06ee3ba5c32cb447`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Pascal.txt](Licenses/Additional/Pascal.txt).

### Proto

- Queries: [queries/highlights.scm](https://github.com/coder3101/tree-sitter-proto/blob/18366491f37d43d6d5d02cbb1e79b650b5728145/queries/highlights.scm) at `18366491f37d43d6d5d02cbb1e79b650b5728145`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [Proto-LICENSE.txt](Licenses/Additional/Proto-LICENSE.txt).

### RON

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-ron/blob/78938553b93075e638035f624973083451b29055/queries/highlights.scm) at `78938553b93075e638035f624973083451b29055`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [RON-LICENSE-APACHE.txt](Licenses/Additional/RON-LICENSE-APACHE.txt), [RON-LICENSE-MIT.txt](Licenses/Additional/RON-LICENSE-MIT.txt).

### Scala

- Queries: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-scala/blob/c76bab0092b622e34df4916d80b117436683d16e/queries/highlights.scm) at `c76bab0092b622e34df4916d80b117436683d16e`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Notices: [Scala.txt](Licenses/Additional/Scala.txt).

### Starlark

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-starlark/blob/a453dbf3ba433db0e5ec621a38a7e59d72e4dc69/queries/highlights.scm) at `a453dbf3ba433db0e5ec621a38a7e59d72e4dc69`.
- Map theme captures; remove editor spell metadata; convert any-of? to anchored match? and Lua patterns to equivalent regular expressions. Starlark field-name regex uses a non-uppercase initial character.
- Notices: [Starlark-LICENSE.txt](Licenses/Additional/Starlark-LICENSE.txt), [Starlark-PythonQueries.txt](Licenses/Additional/Starlark-PythonQueries.txt).

### Tcl

- Queries: [queries/tcl/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-tcl/blob/850a72ab6436e06645b33b11cfa60cbdb04b1f01/queries/tcl/highlights.scm) at `850a72ab6436e06645b33b11cfa60cbdb04b1f01`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Notices: [Tcl-LICENSE](Licenses/Additional/Tcl-LICENSE).

### Twig

- Queries: [queries/highlights.scm](https://github.com/gbprod/tree-sitter-twig/blob/2208d2a3c3ee7ef378e97df2e51c18feb7ee9dfc/queries/highlights.scm) at `2208d2a3c3ee7ef378e97df2e51c18feb7ee9dfc`.
- Queries: [queries/injections.scm](https://github.com/gbprod/tree-sitter-twig/blob/2208d2a3c3ee7ef378e97df2e51c18feb7ee9dfc/queries/injections.scm) at `2208d2a3c3ee7ef378e97df2e51c18feb7ee9dfc`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Use direct language captures for injection regions; omit unsupported combined/include-children flags.
- HTML content segments are injected individually; Runestone does not combine disjoint regions, so HTML spanning template boundaries may be incomplete.
- Notices: [Twig-LICENSE](Licenses/Additional/Twig-LICENSE).

### Vim

- Queries: [queries/vim/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-vim/blob/039c8d0aa1deae00ddeb0374dd70bcc0ec56938d/queries/vim/highlights.scm) at `039c8d0aa1deae00ddeb0374dd70bcc0ec56938d`.
- Queries: [queries/vim/injections.scm](https://github.com/tree-sitter-grammars/tree-sitter-vim/blob/039c8d0aa1deae00ddeb0374dd70bcc0ec56938d/queries/vim/injections.scm) at `039c8d0aa1deae00ddeb0374dd70bcc0ec56938d`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Use direct language captures for injection regions; omit unsupported combined/include-children flags.
- Lua, Ruby and Python script blocks are injected; upstream Vim self-injection for option expressions and autocmd glob-as-regex injection are intentionally omitted.
- Notices: [Vim-LICENSE](Licenses/Additional/Vim-LICENSE).

### Vue

- Queries: [queries/html_tags/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-vue/blob/ce8011a414fdf8091f4e4071752efc376f4afb08/queries/html_tags/highlights.scm) at `ce8011a414fdf8091f4e4071752efc376f4afb08`.
- Queries: [queries/vue/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-vue/blob/ce8011a414fdf8091f4e4071752efc376f4afb08/queries/vue/highlights.scm) at `ce8011a414fdf8091f4e4071752efc376f4afb08`.
- Queries: [queries/vue/injections.scm](https://github.com/tree-sitter-grammars/tree-sitter-vue/blob/ce8011a414fdf8091f4e4071752efc376f4afb08/queries/vue/injections.scm) at `ce8011a414fdf8091f4e4071752efc376f4afb08`.
- Queries: [queries/html_tags/injections.scm](https://github.com/tree-sitter-grammars/tree-sitter-vue/blob/ce8011a414fdf8091f4e4071752efc376f4afb08/queries/html_tags/injections.scm) at `ce8011a414fdf8091f4e4071752efc376f4afb08`.
- Translate any-of?/not-any-of? into anchored match?/not-match? alternatives without removing conditions.
- Map modern capture names to established Runestone names; remove spell/nospell editor controls.
- Use direct language captures for injection regions; omit unsupported combined/include-children flags.
- Flatten inherited html_tags highlights, remove template commentstring setting, replace Lua patterns with supported regular expressions and explicit language captures.
- Use the distinct JSX language capture; an explicit lang takes precedence over script/style type fallbacks to avoid overlapping language injections.
- Explicit CSS/SCSS, JavaScript/JSX/TypeScript/TSX and JSON script types are supported. Unsupported style preprocessors and Pug are not mislabeled as another language.
- Notices: [Vue-LICENSE](Licenses/Additional/Vue-LICENSE).

### Zig

- Queries: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-zig/blob/6479aa13f32f701c383083d8b28360ebd682fb7d/queries/highlights.scm) at `6479aa13f32f701c383083d8b28360ebd682fb7d`.
- Capture names normalized to Runestone conventions; editor spell-check captures omitted.
- Converted any-of? to anchored match? alternations, retaining exact string membership.
- Converted Lua-match predicates whose patterns are regex-compatible to match?.
- Quoted priority metadata value for the supported set! two-string form.
- Upstream string priority metadata retained; Runestone does not implement editor-specific priority overrides.
- Notices: [Zig.txt](Licenses/Additional/Zig.txt).

## Integration checks

Run `python3 Tests/Compatibility/test.py /path/to/tree-sitter` against Tree-sitter 0.27.1. The existing CI job runs both original grammar checks and the additional capture-level checks. For a focused check, run `python3 Tests/Additional/test.py --runtime /path/to/tree-sitter --language Vue`.

The additional fixtures verify clean sample parsing, highlight-query compilation, supported predicate operators/arguments, representative positive captures, negative predicate cases, and template injection captures. The Python evaluator checks the supported predicate subset; Runestone Editor integration tests additionally exercise the actual Swift evaluator and syntax highlighter. These checks do not establish full language conformance.
