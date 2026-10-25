# Existing grammar refresh

All 38 existing products were checked against their maintained source repositories on 2026-10-25. The table pins the selected current upstream revision, including generated sources. SCSS already matched its named upstream and retains its parser; its highlighting is improved. Lua, Perl, Svelte, Markdown, TOML, and YAML use their maintained upstream repositories.

## Runtime

These parsers require Runestone’s merged Tree-sitter 0.27.1 integration. The package pins Runestone `31f640bf39917d1e5fd8e6bf1b065e42b0e57c4a`. Replace this revision requirement with a released Runestone version containing that migration before publishing a semantic-versioned package release. Public language and query APIs remain available.

## Sources

| Product | Upstream revision | License |
|---|---|---|
| Astro | [virchau13/tree-sitter-astro@213f6e6973d9](https://github.com/virchau13/tree-sitter-astro/tree/213f6e6973d9b456c6e50e86f19f66877e7ef0ee) | MIT |
| Bash | [tree-sitter/tree-sitter-bash@a06c2e4415e9](https://github.com/tree-sitter/tree-sitter-bash/tree/a06c2e4415e9bc0346c6b86d401879ffb44058f7) | MIT |
| C | [tree-sitter/tree-sitter-c@b780e47fc780](https://github.com/tree-sitter/tree-sitter-c/tree/b780e47fc780ddc8da13afa35a3f4ed5c157823d) | MIT |
| CPP | [tree-sitter/tree-sitter-cpp@c00922280863](https://github.com/tree-sitter/tree-sitter-cpp/tree/c009222808634c1014f82438d4883753516a2c24) | MIT |
| CSS | [tree-sitter/tree-sitter-css@dda5cfc5722c](https://github.com/tree-sitter/tree-sitter-css/tree/dda5cfc5722c429eaba1c910ca32c2c0c5bb1a3f) | MIT |
| CSharp | [tree-sitter/tree-sitter-c-sharp@8c0abe0b84a3](https://github.com/tree-sitter/tree-sitter-c-sharp/tree/8c0abe0b84a3681d3e6852ce2e2a1eecb4f731c5) | MIT |
| Comment | [stsewd/tree-sitter-comment@66272d2b6c73](https://github.com/stsewd/tree-sitter-comment/tree/66272d2b6c73fb61157541b69dd0a7ce7b42a5ad) | MIT |
| Elixir | [elixir-lang/tree-sitter-elixir@cb32ccbe17c6](https://github.com/elixir-lang/tree-sitter-elixir/tree/cb32ccbe17c67037b09e31bf9beb22cdae6ed8e9) | Apache-2.0 |
| Elm | [elm-tooling/tree-sitter-elm@e1e8fea161a1](https://github.com/elm-tooling/tree-sitter-elm/tree/e1e8fea161a1e66f3997855d316be2a43e4e956f) | MIT |
| Go | [tree-sitter/tree-sitter-go@2346a3ab1bb3](https://github.com/tree-sitter/tree-sitter-go/tree/2346a3ab1bb3857b48b29d779a1ef9799a248cd7) | MIT |
| HTML | [tree-sitter/tree-sitter-html@73a3947324f6](https://github.com/tree-sitter/tree-sitter-html/tree/73a3947324f6efddf9e17c0ea58d454843590cc0) | MIT |
| Haskell | [tree-sitter/tree-sitter-haskell@97288e585b0b](https://github.com/tree-sitter/tree-sitter-haskell/tree/97288e585b0bd44199720280d067fa35bacd81ff) | MIT |
| JSDoc | [tree-sitter/tree-sitter-jsdoc@658d18dcdddb](https://github.com/tree-sitter/tree-sitter-jsdoc/tree/658d18dcdddb75c760363faa4963427a7c6b52db) | MIT |
| JSON | [tree-sitter/tree-sitter-json@254c42a64764](https://github.com/tree-sitter/tree-sitter-json/tree/254c42a6476413b776221e03982ac8ae159eeb72) | MIT |
| JSON5 | [Joakker/tree-sitter-json5@248b85645670](https://github.com/Joakker/tree-sitter-json5/tree/248b8564567087d7866be76569b182f6dd7e14e9) | MIT |
| Java | [tree-sitter/tree-sitter-java@e10607b45ff7](https://github.com/tree-sitter/tree-sitter-java/tree/e10607b45ff745f5f876bfa3e94fbcc6b44bdc11) | MIT |
| JavaScript | [tree-sitter/tree-sitter-javascript@58404d8cf191](https://github.com/tree-sitter/tree-sitter-javascript/tree/58404d8cf191d69f2674a8fd507bd5776f46cb11) | MIT |
| Julia | [tree-sitter/tree-sitter-julia@e0f9dcd180fd](https://github.com/tree-sitter/tree-sitter-julia/tree/e0f9dcd180fdcfcfa8d79a3531e11d99e79321d3) | MIT |
| LaTeX | [latex-lsp/tree-sitter-latex@fa8df448fc2c](https://github.com/latex-lsp/tree-sitter-latex/tree/fa8df448fc2c0192a8c2f8cfc97de53cb2b4ecb9) | MIT |
| Lua | [tree-sitter-grammars/tree-sitter-lua@10fe0054734e](https://github.com/tree-sitter-grammars/tree-sitter-lua/tree/10fe0054734eec83049514ea2e718b2a56acd0c9) | MIT |
| Markdown | [tree-sitter-grammars/tree-sitter-markdown@41ff24a6c775](https://github.com/tree-sitter-grammars/tree-sitter-markdown/tree/41ff24a6c775492c543b09228aeb98d1cd2b3a0f) | MIT |
| MarkdownInline | [tree-sitter-grammars/tree-sitter-markdown@41ff24a6c775](https://github.com/tree-sitter-grammars/tree-sitter-markdown/tree/41ff24a6c775492c543b09228aeb98d1cd2b3a0f) | MIT |
| OCaml | [tree-sitter/tree-sitter-ocaml@3b2e14e0697d](https://github.com/tree-sitter/tree-sitter-ocaml/tree/3b2e14e0697d405c9aa0beddfa09b71f45abc504) | MIT |
| PHP | [tree-sitter/tree-sitter-php@58d5643086ae](https://github.com/tree-sitter/tree-sitter-php/tree/58d5643086ae60e93a3746cca648363ee97c8761) | MIT |
| Perl | [tree-sitter-perl/tree-sitter-perl@775e75a51c12](https://github.com/tree-sitter-perl/tree-sitter-perl/tree/775e75a51c1230fccbde7d607cd6d424b0ce1016) | MIT |
| Python | [tree-sitter/tree-sitter-python@26855eabccb1](https://github.com/tree-sitter/tree-sitter-python/tree/26855eabccb19c6abf499fbc5b8dc7cc9ab8bc64) | MIT |
| R | [r-lib/tree-sitter-r@58a22794466c](https://github.com/r-lib/tree-sitter-r/tree/58a22794466c0fc15b0d3b40531db751593721e8) | MIT |
| Regex | [tree-sitter/tree-sitter-regex@b2ac15e27fce](https://github.com/tree-sitter/tree-sitter-regex/tree/b2ac15e27fce703d2f37a79ccd94a5c0cbe9720b) | MIT |
| Ruby | [tree-sitter/tree-sitter-ruby@ad907a69da0c](https://github.com/tree-sitter/tree-sitter-ruby/tree/ad907a69da0c8a4f7a943a7fe012712208da6dee) | MIT |
| Rust | [tree-sitter/tree-sitter-rust@77a3747266f4](https://github.com/tree-sitter/tree-sitter-rust/tree/77a3747266f4d621d0757825e6b11edcbf991ca5) | MIT |
| SCSS | [serenadeai/tree-sitter-scss@c478c6868648](https://github.com/serenadeai/tree-sitter-scss/tree/c478c6868648eff49eb04a4df90d703dc45b312a) | MIT |
| SQL | [DerekStride/tree-sitter-sql@e038788e5d4d](https://github.com/DerekStride/tree-sitter-sql/tree/e038788e5d4daba82dea35676bf49a216629e141) | MIT |
| Svelte | [tree-sitter-grammars/tree-sitter-svelte@ae5199db4775](https://github.com/tree-sitter-grammars/tree-sitter-svelte/tree/ae5199db47757f785e43a14b332118a5474de1a2) | MIT |
| Swift | [alex-pinkus/tree-sitter-swift@9e3b87f66f1f](https://github.com/alex-pinkus/tree-sitter-swift/tree/9e3b87f66f1fd2f3b931376fd3723ab788e337c3) | MIT |
| TOML | [tree-sitter-grammars/tree-sitter-toml@64b56832c2cf](https://github.com/tree-sitter-grammars/tree-sitter-toml/tree/64b56832c2cffe41758f28e05c756a3a98d16f41) | MIT |
| TSX | [tree-sitter/tree-sitter-typescript@75b3874edb2d](https://github.com/tree-sitter/tree-sitter-typescript/tree/75b3874edb2dc714fb1fd77a32013d0f8699989f) | MIT |
| TypeScript | [tree-sitter/tree-sitter-typescript@75b3874edb2d](https://github.com/tree-sitter/tree-sitter-typescript/tree/75b3874edb2dc714fb1fd77a32013d0f8699989f) | MIT |
| YAML | [tree-sitter-grammars/tree-sitter-yaml@a1c4812a73ec](https://github.com/tree-sitter-grammars/tree-sitter-yaml/tree/a1c4812a73ec5e089de8e441fdea3a921e8d5079) | MIT |

## Query adaptations and known limitations

Queries use Runestone capture names and supported predicates. Unsupported editor-specific metadata and scope heuristics are adapted or omitted explicitly. This is syntax highlighting, not semantic analysis or full language conformance. Swift and LaTeX parsers are generated from their pinned grammars with CLI 0.27.1. Node binding sources are omitted from the C runtime targets.

### Astro

- Query source: [queries/highlights.scm](https://github.com/virchau13/tree-sitter-astro/blob/213f6e6973d9b456c6e50e86f19f66877e7ef0ee/queries/highlights.scm) at `213f6e6973d9b456c6e50e86f19f66877e7ef0ee`.
- Update frontmatter/interpolation nodes for current grammar; supply CSS/SCSS and explicit script language injections with mutually exclusive default selection.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- HTML interpolation follows upstream permissible_text boundaries; complex embedded JSX is not a complete JavaScript AST in the host grammar.
- Notices: [Astro.txt](Licenses/Updates/Astro.txt).

### Bash

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-bash/blob/a06c2e4415e9bc0346c6b86d401879ffb44058f7/queries/highlights.scm) at `a06c2e4415e9bc0346c6b86d401879ffb44058f7`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Notices: [Bash-LICENSE.txt](Licenses/Updates/Bash-LICENSE.txt).

### C

- Query source: [https://github.com/tree-sitter/tree-sitter-c](https://github.com/tree-sitter/tree-sitter-c/blob/b780e47fc780ddc8da13afa35a3f4ed5c157823d/) at `b780e47fc780ddc8da13afa35a3f4ed5c157823d`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Notices: .

### CPP

- Query source: [https://github.com/tree-sitter/tree-sitter-cpp](https://github.com/tree-sitter/tree-sitter-cpp/blob/c009222808634c1014f82438d4883753516a2c24/) at `c009222808634c1014f82438d4883753516a2c24`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Notices: .

### CSS

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-css/blob/dda5cfc5722c429eaba1c910ca32c2c0c5bb1a3f/queries/highlights.scm) at `dda5cfc5722c429eaba1c910ca32c2c0c5bb1a3f`.
- Use current upstream highlights with Runestone-compatible captures.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Upstream still rejects container range syntax (width > 30rem); traditional min-width query covered.
- Notices: [CSS.txt](Licenses/Updates/CSS.txt).

### CSharp

- Query source: [https://github.com/tree-sitter/tree-sitter-c-sharp](https://github.com/tree-sitter/tree-sitter-c-sharp/blob/8c0abe0b84a3681d3e6852ce2e2a1eecb4f731c5/) at `8c0abe0b84a3681d3e6852ce2e2a1eecb4f731c5`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Notices: .

### Comment

- Query source: [Sources/TreeSitterCommentQueries/highlights.scm](https://github.com/simonbs/TreeSitterLanguages/blob/9adbb839524e47e0eee8803f8e02d81b78ad1847/Sources/TreeSitterCommentQueries/highlights.scm) at `9adbb839524e47e0eee8803f8e02d81b78ad1847`.
- Preserves existing code-tag queries; translates any-of? and Lua-compatible patterns to supported regex predicates.
- Preserves upstream included C fragments and existing SwiftPM exclusions; only scanner.c compiles them.
- Notices: [Comment-LICENSE.txt](Licenses/Updates/Comment-LICENSE.txt).

### Elixir

- Query source: [queries/highlights.scm](https://github.com/elixir-lang/tree-sitter-elixir/blob/cb32ccbe17c67037b09e31bf9beb22cdae6ed8e9/queries/highlights.scm) at `cb32ccbe17c67037b09e31bf9beb22cdae6ed8e9`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Keyword captures use a language suffix so they override generic function captures; booleans and nil use constant.builtin.
- Notices: [Elixir-LICENSE.txt](Licenses/Updates/Elixir-LICENSE.txt).

### Elm

- Query source: [queries/highlights.scm](https://github.com/elm-tooling/tree-sitter-elm/blob/e1e8fea161a1e66f3997855d316be2a43e4e956f/queries/highlights.scm) at `e1e8fea161a1e66f3997855d316be2a43e4e956f`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Notices: [Elm-LICENSE.md.txt](Licenses/Updates/Elm-LICENSE.md.txt).

### Go

- Query source: [https://github.com/tree-sitter/tree-sitter-go](https://github.com/tree-sitter/tree-sitter-go/blob/2346a3ab1bb3857b48b29d779a1ef9799a248cd7/) at `2346a3ab1bb3857b48b29d779a1ef9799a248cd7`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Notices: .

### HTML

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-html/blob/73a3947324f6efddf9e17c0ea58d454843590cc0/queries/highlights.scm) at `73a3947324f6efddf9e17c0ea58d454843590cc0`.
- Use script MIME type to distinguish JavaScript and JSON; do not inject JSON scripts as JavaScript.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [HTML.txt](Licenses/Updates/HTML.txt).

### Haskell

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-haskell/blob/97288e585b0bd44199720280d067fa35bacd81ff/queries/highlights.scm) at `97288e585b0bd44199720280d067fa35bacd81ff`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Three cross-declaration equality heuristics omitted because Runestone currently compares the left capture to itself; direct declarations, signatures and calls remain highlighted.
- Notices: [Haskell-LICENSE.txt](Licenses/Updates/Haskell-LICENSE.txt).

### JSDoc

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-jsdoc/blob/658d18dcdddb75c760363faa4963427a7c6b52db/queries/highlights.scm) at `658d18dcdddb75c760363faa4963427a7c6b52db`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Notices: [JSDoc-LICENSE.txt](Licenses/Updates/JSDoc-LICENSE.txt).

### JSON

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-json/blob/254c42a6476413b776221e03982ac8ae159eeb72/queries/highlights.scm) at `254c42a6476413b776221e03982ac8ae159eeb72`.
- Use current upstream highlights with Runestone-compatible captures.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [JSON.txt](Licenses/Updates/JSON.txt).

### JSON5

- Query source: [queries/highlights.scm](https://github.com/Joakker/tree-sitter-json5/blob/248b8564567087d7866be76569b182f6dd7e14e9/queries/highlights.scm) at `248b8564567087d7866be76569b182f6dd7e14e9`.
- Use legacy Runestone number/constant names; highlight every string and distinguish member keys from values; remove ineffective comment-language injection.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [JSON5.txt](Licenses/Updates/JSON5.txt).

### Java

- Query source: [https://github.com/tree-sitter/tree-sitter-java](https://github.com/tree-sitter/tree-sitter-java/blob/e10607b45ff745f5f876bfa3e94fbcc6b44bdc11/) at `e10607b45ff745f5f876bfa3e94fbcc6b44bdc11`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Notices: .

### JavaScript

- Query source: [https://github.com/tree-sitter/tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript/blob/58404d8cf191d69f2674a8fd507bd5776f46cb11/) at `58404d8cf191d69f2674a8fd507bd5776f46cb11`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Injection query uses supported captures or tag/content pairs; unsupported combined/include-children/offset directives removed. Whole captured ranges are injected by Runestone; fragments exclude literal delimiters structurally.
- Notices: .

### Julia

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-julia/blob/e0f9dcd180fdcfcfa8d79a3531e11d99e79321d3/queries/highlights.scm) at `e0f9dcd180fdcfcfa8d79a3531e11d99e79321d3`.
- Query source: [Sources/TreeSitterJuliaQueries/injections.scm](https://github.com/simonbs/TreeSitterLanguages/blob/9adbb839524e47e0eee8803f8e02d81b78ad1847/Sources/TreeSitterJuliaQueries/injections.scm) at `9adbb839524e47e0eee8803f8e02d81b78ad1847`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Preserves comment-language injections. Replaces has-ancestor? predicate with structural index-expression query.
- Function calls specialize field/member styling; builtin functions use a more-specific capture to win over generic calls.
- Notices: [Julia-LICENSE.txt](Licenses/Updates/Julia-LICENSE.txt).

### LaTeX

- Query source: [Sources/TreeSitterLaTeXQueries/highlights.scm](https://github.com/simonbs/TreeSitterLanguages/blob/9adbb839524e47e0eee8803f8e02d81b78ad1847/Sources/TreeSitterLaTeXQueries/highlights.scm) at `9adbb839524e47e0eee8803f8e02d81b78ad1847`.
- Preserve Runestone formatting, update theorem/label/bibliography/hyperlink node shapes, replace unsupported any-of? with eq?, repair minted injection capture names and limit Asymptote C fallback to source_code.
- Generated from pinned grammar.js with official tree-sitter CLI 0.27.1.
- Notices: [LaTeX.txt](Licenses/Updates/LaTeX.txt).

### Lua

- Query source: [https://github.com/tree-sitter-grammars/tree-sitter-lua](https://github.com/tree-sitter-grammars/tree-sitter-lua/blob/10fe0054734eec83049514ea2e718b2a56acd0c9/) at `10fe0054734eec83049514ea2e718b2a56acd0c9`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Canonical Lua replaces old global scanner state with per-instance payload; local adaptation clears payload before deserialize, including length0 reset.
- Injection query uses supported captures or tag/content pairs; unsupported combined/include-children/offset directives removed. Whole captured ranges are injected by Runestone; fragments exclude literal delimiters structurally.
- Notices: .

### Markdown

- Query source: [tree-sitter-markdown/queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-markdown/blob/41ff24a6c775492c543b09228aeb98d1cd2b3a0f/tree-sitter-markdown/queries/highlights.scm) at `41ff24a6c775492c543b09228aeb98d1cd2b3a0f`.
- Preserve Runestone text.* captures and inline language injection. Fix plus metadata language to TOML, add task markers and inline injection for table cells.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Upstream highlight query credits nvim-treesitter; its Apache-2.0 notice is retained in addition to the grammar MIT license.
- Scanner regression: Tests/Updates/markdown_scanner_regression.py checks deep nesting and incremental/fresh AST equality under AddressSanitizer.
- TOML metadata injection includes +++ delimiters because the grammar exposes a single metadata leaf and Runestone has no query offset directive; embedded parser recovery is required.
- Notices: [Markdown.txt](Licenses/Updates/Markdown.txt), [Markdown-nvim-treesitter.txt](Licenses/Updates/Markdown-nvim-treesitter.txt).

### MarkdownInline

- Query source: [tree-sitter-markdown-inline/queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-markdown/blob/41ff24a6c775492c543b09228aeb98d1cd2b3a0f/tree-sitter-markdown-inline/queries/highlights.scm) at `41ff24a6c775492c543b09228aeb98d1cd2b3a0f`.
- Preserve Runestone text.* captures, restore right-parenthesis punctuation, add strikethrough/email/entity captures.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Upstream highlight query credits nvim-treesitter; its Apache-2.0 notice is retained in addition to the grammar MIT license.
- Notices: [MarkdownInline.txt](Licenses/Updates/MarkdownInline.txt), [MarkdownInline-nvim-treesitter.txt](Licenses/Updates/MarkdownInline-nvim-treesitter.txt).

### OCaml

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-ocaml/blob/3b2e14e0697d405c9aa0beddfa09b71f45abc504/queries/highlights.scm) at `3b2e14e0697d405c9aa0beddfa09b71f45abc504`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Includes upstream iterative nested-comment scanner fix; regression test covers deeply nested comments.
- Shared scanner header relocated under src/common; scanner include path adjusted.
- Notices: [OCaml-LICENSE.txt](Licenses/Updates/OCaml-LICENSE.txt).

### PHP

- Query source: [https://github.com/tree-sitter/tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php/blob/58d5643086ae60e93a3746cca648363ee97c8761/) at `58d5643086ae60e93a3746cca648363ee97c8761`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Shared upstream scanner.h copied beside scanner.c and include path localized for independent SwiftPM target compilation.
- Injection query uses supported captures or tag/content pairs; unsupported combined/include-children/offset directives removed. Whole captured ranges are injected by Runestone; fragments exclude literal delimiters structurally.
- Notices: .

### Perl

- Query source: [queries/highlights.scm](https://github.com/tree-sitter-perl/tree-sitter-perl/blob/775e75a51c1230fccbde7d607cd6d424b0ce1016/queries/highlights.scm) at `775e75a51c1230fccbde7d607cd6d424b0ce1016`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Parser generated from canonical upstream with Tree-sitter CLI 0.27.1 (ABI 15).
- Notices: [Perl-LICENSE.txt](Licenses/Updates/Perl-LICENSE.txt).

### Python

- Query source: [https://github.com/tree-sitter/tree-sitter-python](https://github.com/tree-sitter/tree-sitter-python/blob/26855eabccb19c6abf499fbc5b8dc7cc9ab8bc64/) at `26855eabccb19c6abf499fbc5b8dc7cc9ab8bc64`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Notices: .

### R

- Query source: [queries/highlights.scm](https://github.com/r-lib/tree-sitter-r/blob/58a22794466c0fc15b0d3b40531db751593721e8/queries/highlights.scm) at `58a22794466c0fc15b0d3b40531db751593721e8`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Notices: [R-LICENSE.txt](Licenses/Updates/R-LICENSE.txt).

### Regex

- Query source: [queries/highlights.scm](https://github.com/tree-sitter/tree-sitter-regex/blob/b2ac15e27fce703d2f37a79ccd94a5c0cbe9720b/queries/highlights.scm) at `b2ac15e27fce703d2f37a79ccd94a5c0cbe9720b`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Notices: [Regex-LICENSE.txt](Licenses/Updates/Regex-LICENSE.txt).

### Ruby

- Query source: [https://github.com/tree-sitter/tree-sitter-ruby](https://github.com/tree-sitter/tree-sitter-ruby/blob/ad907a69da0c8a4f7a943a7fe012712208da6dee/) at `ad907a69da0c8a4f7a943a7fe012712208da6dee`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Pinned revision includes upstream heredoc serialization bounds fix; dedicated native regression checks oversized delimiter handling and bounded roundtrip.
- Notices: .

### Rust

- Query source: [https://github.com/tree-sitter/tree-sitter-rust](https://github.com/tree-sitter/tree-sitter-rust/blob/77a3747266f4d621d0757825e6b11edcbf991ca5/) at `77a3747266f4d621d0757825e6b11edcbf991ca5`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Removed accidental trailing apostrophe from upstream constant regex; changed stale if_let_expression indentation node to if_expression.
- Injection query uses supported captures or tag/content pairs; unsupported combined/include-children/offset directives removed. Whole captured ranges are injected by Runestone; fragments exclude literal delimiters structurally.
- Notices: .

### SCSS

- Query source: [queries/highlights.scm](https://github.com/serenadeai/tree-sitter-scss/blob/c478c6868648eff49eb04a4df90d703dc45b312a/queries/highlights.scm) at `c478c6868648eff49eb04a4df90d703dc45b312a`.
- Query source: [Sources/TreeSitterSCSSQueries/highlights.scm](https://github.com/simonbs/TreeSitterLanguages/blob/9adbb839524e47e0eee8803f8e02d81b78ad1847/Sources/TreeSitterSCSSQueries/highlights.scm) at `9adbb839524e47e0eee8803f8e02d81b78ad1847`.
- Parser/scanner already match upstream and are retained byte-for-byte. Preserve fixed #match? predicates; add SCSS variables, comments, directives and punctuation missing from CSS-derived upstream query.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [SCSS.txt](Licenses/Updates/SCSS.txt).

### SQL

- Query source: [queries/highlights.scm](https://github.com/DerekStride/tree-sitter-sql/blob/e038788e5d4daba82dea35676bf49a216629e141/queries/highlights.scm) at `e038788e5d4daba82dea35676bf49a216629e141`.
- Upstream parser/scanner and highlighting queries updated together. Generic function captures remain less specific than builtin captures for Runestone precedence.
- Lua digit-class predicates replaced by regular expressions, including exponent literals. Numeric captures specialize the upstream broad literal-string capture.
- Notices: [SQL-LICENSE.txt](Licenses/Updates/SQL-LICENSE.txt).

### Svelte

- Query source: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-svelte/blob/ae5199db47757f785e43a14b332118a5474de1a2/queries/highlights.scm) at `ae5199db47757f785e43a14b332118a5474de1a2`.
- Query source: [Sources/TreeSitterSvelteQueries/highlights.scm](https://github.com/simonbs/TreeSitterLanguages/blob/9adbb839524e47e0eee8803f8e02d81b78ad1847/Sources/TreeSitterSvelteQueries/highlights.scm) at `9adbb839524e47e0eee8803f8e02d81b78ad1847`.
- Keep existing Runestone HTML text formatting; migrate to current Svelte5 snippet/render syntax. Use svelte_raw_text for TypeScript-compatible template expressions. Guard default and type fallback so lang=ts cannot overlap JavaScript; retain inline style injection.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [Svelte.txt](Licenses/Updates/Svelte.txt).

### Swift

- Query source: [https://github.com/alex-pinkus/tree-sitter-swift](https://github.com/alex-pinkus/tree-sitter-swift/blob/9e3b87f66f1fd2f3b931376fd3723ab788e337c3/) at `9e3b87f66f1fd2f3b931376fd3723ab788e337c3`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- parser.c generated from upstream HEAD with official Tree-sitter CLI 0.27.1 (default ABI15).
- Notices: .

### TOML

- Query source: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-toml/blob/64b56832c2cffe41758f28e05c756a3a98d16f41/queries/highlights.scm) at `64b56832c2cffe41758f28e05c756a3a98d16f41`.
- Retain property capture on key nodes rather than upstream whole-pair capture.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [TOML.txt](Licenses/Updates/TOML.txt).

### TSX

- Query source: [https://github.com/tree-sitter/tree-sitter-typescript](https://github.com/tree-sitter/tree-sitter-typescript/blob/75b3874edb2dc714fb1fd77a32013d0f8699989f/) at `75b3874edb2dc714fb1fd77a32013d0f8699989f`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Shared upstream scanner.h copied beside scanner.c and include path localized for independent SwiftPM target compilation.
- Notices: .

### TypeScript

- Query source: [https://github.com/tree-sitter/tree-sitter-typescript](https://github.com/tree-sitter/tree-sitter-typescript/blob/75b3874edb2dc714fb1fd77a32013d0f8699989f/) at `75b3874edb2dc714fb1fd77a32013d0f8699989f`.
- Parser, scanner, private headers and bundled queries refreshed together from the pinned revision. Existing public API and Runestone indentation configuration retained.
- Capture names normalized to Runestone theme scopes; embedded interpolation uses none to restore normal foreground. Local-dependent builtin/reference heuristics omitted because Runestone does not evaluate local scope predicates; structural captures retained. Tag documentation transformation directives omitted because Runestone does not process tag documentation.
- Shared upstream scanner.h copied beside scanner.c and include path localized for independent SwiftPM target compilation.
- Notices: .

### YAML

- Query source: [queries/highlights.scm](https://github.com/tree-sitter-grammars/tree-sitter-yaml/blob/a1c4812a73ec5e089de8e441fdea3a921e8d5079/queries/highlights.scm) at `a1c4812a73ec5e089de8e441fdea3a921e8d5079`.
- Retain Runestone field/type names; add upstream full coverage for flow strings and block scalars; retain escape highlighting.
- Native fixture verifies parse and representative capture semantics, not visual theme rendering.
- Notices: [YAML.txt](Licenses/Updates/YAML.txt).

## Validation

`python3 Tests/Compatibility/test.py /path/to/tree-sitter` compiles all parsers and every bundled query, then checks representative positive/negative captures, embedded-language captures, and scanner regressions. The fixtures include modern syntax in Python, TypeScript/TSX, Java, C#, Go, PHP, Swift, and Svelte.

The Markdown regression exercises nested blocks and incremental edits under AddressSanitizer; OCaml exercises deep comments with a bounded stack. Lua and Ruby regressions cover scanner reset/isolation and serialization bounds. The native fixture evaluator checks supported predicate behavior; the editor companion PR checks the actual Swift highlighter and default-theme token colors.
