# Language sources

Generated parsers, scanners, and private headers are vendored from the revisions
below. Public language headers only forward-declare `TSLanguage`. The package
uses Runestone's Tree-sitter 0.27.1 runtime; generated grammar ABIs 13–15 are supported.

The linked JSON records retain parser and query provenance, local query
adaptations, license-notice paths, and executable fixtures. Keep these records in
sync when updating a grammar. Preserve the applicable files in `Licenses/` when
redistributing parsers or queries; query licenses can differ from parser licenses.

| Product / fixture metadata | Upstream revision | Parser license |
|---|---|---|
| [Astro](Tests/Updates/Astro.json) | [virchau13/tree-sitter-astro@213f6e6973d9](https://github.com/virchau13/tree-sitter-astro/tree/213f6e6973d9b456c6e50e86f19f66877e7ef0ee) | MIT |
| [Bash](Tests/Updates/Bash.json) | [tree-sitter/tree-sitter-bash@a06c2e4415e9](https://github.com/tree-sitter/tree-sitter-bash/tree/a06c2e4415e9bc0346c6b86d401879ffb44058f7) | MIT |
| [Bicep](Tests/Additional/Bicep.json) | [tree-sitter-grammars/tree-sitter-bicep@bff59884307c](https://github.com/tree-sitter-grammars/tree-sitter-bicep/tree/bff59884307c0ab009bd5e81afd9324b46a6c0f9) | MIT |
| [C](Tests/Updates/C.json) | [tree-sitter/tree-sitter-c@b780e47fc780](https://github.com/tree-sitter/tree-sitter-c/tree/b780e47fc780ddc8da13afa35a3f4ed5c157823d) | MIT |
| [CMake](Tests/Additional/CMake.json) | [uyha/tree-sitter-cmake@58993af75218](https://github.com/uyha/tree-sitter-cmake/tree/58993af75218bc99a1f5a04c832a5937e7c422cb) | MIT |
| [Comment](Tests/Updates/Comment.json) | [stsewd/tree-sitter-comment@66272d2b6c73](https://github.com/stsewd/tree-sitter-comment/tree/66272d2b6c73fb61157541b69dd0a7ce7b42a5ad) | MIT |
| [CPP](Tests/Updates/CPP.json) | [tree-sitter/tree-sitter-cpp@c00922280863](https://github.com/tree-sitter/tree-sitter-cpp/tree/c009222808634c1014f82438d4883753516a2c24) | MIT |
| [CSharp](Tests/Updates/CSharp.json) | [tree-sitter/tree-sitter-c-sharp@8c0abe0b84a3](https://github.com/tree-sitter/tree-sitter-c-sharp/tree/8c0abe0b84a3681d3e6852ce2e2a1eecb4f731c5) | MIT |
| [CSS](Tests/Updates/CSS.json) | [tree-sitter/tree-sitter-css@dda5cfc5722c](https://github.com/tree-sitter/tree-sitter-css/tree/dda5cfc5722c429eaba1c910ca32c2c0c5bb1a3f) | MIT |
| [Dart](Tests/Additional/Dart.json) | [UserNobody14/tree-sitter-dart@0038280b774b](https://github.com/UserNobody14/tree-sitter-dart/tree/0038280b774b65c1b89ba7fec50624d8baed9fe1) | MIT |
| [Diff](Tests/Updates/Diff.json) | [tree-sitter-grammars/tree-sitter-diff@6e74409a3d61](https://github.com/tree-sitter-grammars/tree-sitter-diff/tree/6e74409a3d6142919347bb21f3ef4a2ce940ff2b) | MIT |
| [Elixir](Tests/Updates/Elixir.json) | [elixir-lang/tree-sitter-elixir@cb32ccbe17c6](https://github.com/elixir-lang/tree-sitter-elixir/tree/cb32ccbe17c67037b09e31bf9beb22cdae6ed8e9) | Apache-2.0 |
| [Elm](Tests/Updates/Elm.json) | [elm-tooling/tree-sitter-elm@e1e8fea161a1](https://github.com/elm-tooling/tree-sitter-elm/tree/e1e8fea161a1e66f3997855d316be2a43e4e956f) | MIT |
| [Fish](Tests/Additional/Fish.json) | [ram02z/tree-sitter-fish@b7f1d682941e](https://github.com/ram02z/tree-sitter-fish/tree/b7f1d682941e0c62dfcd6bf9ef481638351bab16) | Unlicense |
| [Glimmer](Tests/Additional/Glimmer.json) | [ember-tooling/tree-sitter-glimmer@c67a73679db2](https://github.com/ember-tooling/tree-sitter-glimmer/tree/c67a73679db2945a686ca45d3e5318d86138e72a) | MIT |
| [Go](Tests/Updates/Go.json) | [tree-sitter/tree-sitter-go@2346a3ab1bb3](https://github.com/tree-sitter/tree-sitter-go/tree/2346a3ab1bb3857b48b29d779a1ef9799a248cd7) | MIT |
| [Haskell](Tests/Updates/Haskell.json) | [tree-sitter/tree-sitter-haskell@97288e585b0b](https://github.com/tree-sitter/tree-sitter-haskell/tree/97288e585b0bd44199720280d067fa35bacd81ff) | MIT |
| [HCL](Tests/Additional/HCL.json) | [tree-sitter-grammars/tree-sitter-hcl@64ad62785d44](https://github.com/tree-sitter-grammars/tree-sitter-hcl/tree/64ad62785d442eb4d45df3a1764962dafd5bc98b) | Apache-2.0 |
| [HTML](Tests/Updates/HTML.json) | [tree-sitter/tree-sitter-html@73a3947324f6](https://github.com/tree-sitter/tree-sitter-html/tree/73a3947324f6efddf9e17c0ea58d454843590cc0) | MIT |
| [Java](Tests/Updates/Java.json) | [tree-sitter/tree-sitter-java@e10607b45ff7](https://github.com/tree-sitter/tree-sitter-java/tree/e10607b45ff745f5f876bfa3e94fbcc6b44bdc11) | MIT |
| [JavaScript](Tests/Updates/JavaScript.json) | [tree-sitter/tree-sitter-javascript@58404d8cf191](https://github.com/tree-sitter/tree-sitter-javascript/tree/58404d8cf191d69f2674a8fd507bd5776f46cb11) | MIT |
| [JSDoc](Tests/Updates/JSDoc.json) | [tree-sitter/tree-sitter-jsdoc@658d18dcdddb](https://github.com/tree-sitter/tree-sitter-jsdoc/tree/658d18dcdddb75c760363faa4963427a7c6b52db) | MIT |
| [JSON](Tests/Updates/JSON.json) | [tree-sitter/tree-sitter-json@254c42a64764](https://github.com/tree-sitter/tree-sitter-json/tree/254c42a6476413b776221e03982ac8ae159eeb72) | MIT |
| [JSON5](Tests/Updates/JSON5.json) | [Joakker/tree-sitter-json5@248b85645670](https://github.com/Joakker/tree-sitter-json5/tree/248b8564567087d7866be76569b182f6dd7e14e9) | MIT |
| [Julia](Tests/Updates/Julia.json) | [tree-sitter/tree-sitter-julia@e0f9dcd180fd](https://github.com/tree-sitter/tree-sitter-julia/tree/e0f9dcd180fdcfcfa8d79a3531e11d99e79321d3) | MIT |
| [LaTeX](Tests/Updates/LaTeX.json) | [latex-lsp/tree-sitter-latex@fa8df448fc2c](https://github.com/latex-lsp/tree-sitter-latex/tree/fa8df448fc2c0192a8c2f8cfc97de53cb2b4ecb9) | MIT |
| [Lua](Tests/Updates/Lua.json) | [tree-sitter-grammars/tree-sitter-lua@10fe0054734e](https://github.com/tree-sitter-grammars/tree-sitter-lua/tree/10fe0054734eec83049514ea2e718b2a56acd0c9) | MIT |
| [Markdown](Tests/Updates/Markdown.json) | [tree-sitter-grammars/tree-sitter-markdown@41ff24a6c775](https://github.com/tree-sitter-grammars/tree-sitter-markdown/tree/41ff24a6c775492c543b09228aeb98d1cd2b3a0f) | MIT |
| [MarkdownInline](Tests/Updates/MarkdownInline.json) | [tree-sitter-grammars/tree-sitter-markdown@41ff24a6c775](https://github.com/tree-sitter-grammars/tree-sitter-markdown/tree/41ff24a6c775492c543b09228aeb98d1cd2b3a0f) | MIT |
| [Nix](Tests/Requested/Nix.json) | [nix-community/tree-sitter-nix@bae4c4fb39a4](https://github.com/nix-community/tree-sitter-nix/tree/bae4c4fb39a4cc87a838817c5e2da7effac75183) | MIT |
| [ObjectiveC](Tests/Additional/ObjectiveC.json) | [tree-sitter-grammars/tree-sitter-objc@181a81b8f23a](https://github.com/tree-sitter-grammars/tree-sitter-objc/tree/181a81b8f23a2d593e7ab4259981f50122909fda) | MIT |
| [OCaml](Tests/Updates/OCaml.json) | [tree-sitter/tree-sitter-ocaml@3b2e14e0697d](https://github.com/tree-sitter/tree-sitter-ocaml/tree/3b2e14e0697d405c9aa0beddfa09b71f45abc504) | MIT |
| [Pascal](Tests/Additional/Pascal.json) | [Isopod/tree-sitter-pascal@042119eca2e1](https://github.com/Isopod/tree-sitter-pascal/tree/042119eca2e18a60e56317fb06ee3ba5c32cb447) | MIT |
| [Perl](Tests/Updates/Perl.json) | [tree-sitter-perl/tree-sitter-perl@775e75a51c12](https://github.com/tree-sitter-perl/tree-sitter-perl/tree/775e75a51c1230fccbde7d607cd6d424b0ce1016) | MIT |
| [PHP](Tests/Updates/PHP.json) | [tree-sitter/tree-sitter-php@58d5643086ae](https://github.com/tree-sitter/tree-sitter-php/tree/58d5643086ae60e93a3746cca648363ee97c8761) | MIT |
| [Proto](Tests/Additional/Proto.json) | [coder3101/tree-sitter-proto@18366491f37d](https://github.com/coder3101/tree-sitter-proto/tree/18366491f37d43d6d5d02cbb1e79b650b5728145) | MIT |
| [Python](Tests/Updates/Python.json) | [tree-sitter/tree-sitter-python@26855eabccb1](https://github.com/tree-sitter/tree-sitter-python/tree/26855eabccb19c6abf499fbc5b8dc7cc9ab8bc64) | MIT |
| [R](Tests/Updates/R.json) | [r-lib/tree-sitter-r@58a22794466c](https://github.com/r-lib/tree-sitter-r/tree/58a22794466c0fc15b0d3b40531db751593721e8) | MIT |
| [Regex](Tests/Updates/Regex.json) | [tree-sitter/tree-sitter-regex@b2ac15e27fce](https://github.com/tree-sitter/tree-sitter-regex/tree/b2ac15e27fce703d2f37a79ccd94a5c0cbe9720b) | MIT |
| [Ruby](Tests/Updates/Ruby.json) | [tree-sitter/tree-sitter-ruby@ad907a69da0c](https://github.com/tree-sitter/tree-sitter-ruby/tree/ad907a69da0c8a4f7a943a7fe012712208da6dee) | MIT |
| [Rust](Tests/Updates/Rust.json) | [tree-sitter/tree-sitter-rust@77a3747266f4](https://github.com/tree-sitter/tree-sitter-rust/tree/77a3747266f4d621d0757825e6b11edcbf991ca5) | MIT |
| [Scala](Tests/Additional/Scala.json) | [tree-sitter/tree-sitter-scala@c76bab0092b6](https://github.com/tree-sitter/tree-sitter-scala/tree/c76bab0092b622e34df4916d80b117436683d16e) | MIT |
| [SCSS](Tests/Updates/SCSS.json) | [serenadeai/tree-sitter-scss@c478c6868648](https://github.com/serenadeai/tree-sitter-scss/tree/c478c6868648eff49eb04a4df90d703dc45b312a) | MIT |
| [SQL](Tests/Updates/SQL.json) | [DerekStride/tree-sitter-sql@e038788e5d4d](https://github.com/DerekStride/tree-sitter-sql/tree/e038788e5d4daba82dea35676bf49a216629e141) | MIT |
| [Svelte](Tests/Updates/Svelte.json) | [tree-sitter-grammars/tree-sitter-svelte@ae5199db4775](https://github.com/tree-sitter-grammars/tree-sitter-svelte/tree/ae5199db47757f785e43a14b332118a5474de1a2) | MIT |
| [Swift](Tests/Updates/Swift.json) | [alex-pinkus/tree-sitter-swift@9e3b87f66f1f](https://github.com/alex-pinkus/tree-sitter-swift/tree/9e3b87f66f1fd2f3b931376fd3723ab788e337c3) | MIT |
| [TOML](Tests/Updates/TOML.json) | [tree-sitter-grammars/tree-sitter-toml@64b56832c2cf](https://github.com/tree-sitter-grammars/tree-sitter-toml/tree/64b56832c2cffe41758f28e05c756a3a98d16f41) | MIT |
| [TSX](Tests/Updates/TSX.json) | [tree-sitter/tree-sitter-typescript@75b3874edb2d](https://github.com/tree-sitter/tree-sitter-typescript/tree/75b3874edb2dc714fb1fd77a32013d0f8699989f) | MIT |
| [TypeScript](Tests/Updates/TypeScript.json) | [tree-sitter/tree-sitter-typescript@75b3874edb2d](https://github.com/tree-sitter/tree-sitter-typescript/tree/75b3874edb2dc714fb1fd77a32013d0f8699989f) | MIT |
| [XML](Tests/Requested/XML.json) | [tree-sitter-grammars/tree-sitter-xml@5000ae8f22d1](https://github.com/tree-sitter-grammars/tree-sitter-xml/tree/5000ae8f22d11fbe93939b05c1e37cf21117162d) | MIT |
| [YAML](Tests/Updates/YAML.json) | [tree-sitter-grammars/tree-sitter-yaml@a1c4812a73ec](https://github.com/tree-sitter-grammars/tree-sitter-yaml/tree/a1c4812a73ec5e089de8e441fdea3a921e8d5079) | MIT |

## Source adaptations and limitations

`query_provenance`, `query_adaptations`, and `notes` in the linked records describe
the exact source files and local changes. Common changes map capture names to
Runestone themes, translate supported predicates, and omit editor-specific scope
analysis or metadata. Swift, LaTeX, and Perl generated sources use CLI 0.27.1;
private generated headers stay with their matching grammar.

Nix and XML queries come from their parser revisions above. Nix uses ABI 13 and
XML ABI 14. The XML scanner include changes from `../../common/scanner.h` to
`../common/scanner.h` for the SwiftPM layout. XML's `any-of?` predicates become
anchored `match?` predicates, and markup captures use Runestone theme names.
Nix restricts property/variable captures to their structural contexts and uses
`function.call` for ordinary calls. Its `is-not? local` predicates are omitted
because Runestone does not perform local-scope analysis.

Diff retains semantic `diff.plus`, `diff.minus`, and `diff.delta` captures. Its highlight
query omits the editor-specific `spell` capture and diff-marker punctuation patterns
whose Neovim priority is not implemented by Runestone. Index separator punctuation
and filename specialization are retained. Upstream filename/offset injections are
not included.

Known limitations in the selected grammars/queries:

- Astro: complex embedded JSX is not a complete JavaScript AST in the host grammar.
- CSS: container range syntax such as `(width > 30rem)` is rejected; traditional `min-width` queries work.
- Haskell: three cross-declaration equality heuristics are omitted because Runestone's current evaluator compares the left capture to itself.
- Markdown: TOML metadata injections include the `+++` delimiters and depend on embedded-parser recovery. Markdown and Markdown-inline highlight queries retain nvim-treesitter's Apache-2.0 notice alongside the grammar's MIT notice.
- Nix: locally shadowed builtins can retain builtin coloring; interpolated identifiers can inherit string coloring in themes without variable/embedded styles.
- XML: compact DTD declarations without separating whitespace can produce missing-whitespace nodes. Whitespace-separated declarations parse cleanly; this package does not expose a standalone DTD language.

## Updating and checking

Update the generated sources, matching private headers, queries, provenance
records, and applicable notices together. Use the runtime from a Tree-sitter
0.27.1 checkout or Runestone's pinned submodule:

```sh
python3 Tests/Compatibility/test.py /path/to/tree-sitter
python3 scripts/check-language-support.py
```

The compatibility runner covers parser/query compilation, representative captures,
injections, and scanner regressions. Focused runners are available in
`Tests/Updates/test.py`, `Tests/Additional/test.py`, and
`scripts/check-language-grammars.py`; each accepts `--runtime` and language filters.
The native `RunestoneLanguageSupportTests` and `RequestedLanguageHighlightTests`
iOS targets cover Swift resource/factory wiring and production highlighter behavior.

## Folding queries

[`FoldingQueries/sources.json`](FoldingQueries/sources.json) records pinned sources,
SHA-256 checksums, and license notices. Original inputs remain in
`FoldingQueries/Upstream`. The importer prefers grammar-hosted definitions and
otherwise uses pinned nvim-treesitter queries, expanding `; inherits:` into
standalone files:

```sh
python3 scripts/import-folding-queries.py
python3 scripts/import-folding-queries.py --check
python3 Tests/Folding/test.py --runtime /path/to/tree-sitter
```

Use `--download` to verify remote inputs against the manifest. Retain the notices
in `Licenses/Folding`; grammar-hosted sources use MIT notices and Neovim queries
use Apache-2.0. Generated files identify composition and adaptations.

The consumer groups repeated `@fold` captures in one match and implements range
operations such as Markdown's `#trim!` and Elm's `#not-has-parent?`. Markdown's
original `(section) @fold` candidate is replaced by `@fold.heading` captures for
ATX and Setext headings, so Runestone can derive mixed-style section boundaries.
The original upstream query remains in the retained inputs.
