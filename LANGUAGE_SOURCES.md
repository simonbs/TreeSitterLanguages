# Additional language sources

These parsers use ABI 14 (Nix uses ABI 13), compatible with the released Runestone dependency and Tree-sitter 0.20.9. Nix and Fortran are pinned to the last generated parser revisions in their histories before moving beyond ABI 14. This keeps the additions independent of the separate runtime migration. Licenses are retained in `Licenses/`.

| Language | Upstream | Revision | License |
|---|---|---|---|
| Clojure | [clj-commons/tree-sitter-clojure](https://github.com/clj-commons/tree-sitter-clojure) | `e43eff80d17cf34852dcd92ca5e6986d23a7040f` | CC0-1.0 |
| Fortran | [stadelmanma/tree-sitter-fortran](https://github.com/stadelmanma/tree-sitter-fortran) | `a5a15a9796a7514ef812688134012d93de6a9824` | MIT |
| Kotlin | [fwcd/tree-sitter-kotlin](https://github.com/fwcd/tree-sitter-kotlin) | `1852ea17b7f60fb3f9d84e0b1555d56b46b39fb1` | MIT |
| Nix | [nix-community/tree-sitter-nix](https://github.com/nix-community/tree-sitter-nix) | `bae4c4fb39a4cc87a838817c5e2da7effac75183` | MIT |
| Org | [emiasims/tree-sitter-org](https://github.com/emiasims/tree-sitter-org) | `64cfbc213f5a83da17632c95382a5a0a2f3357c1` | MIT |
| PowerShell | [wharflab/tree-sitter-powershell](https://github.com/wharflab/tree-sitter-powershell) | `21b365bdcf4609a431f4acfd3af9eeca9a348927` | MIT |
| XML | [tree-sitter-grammars/tree-sitter-xml](https://github.com/tree-sitter-grammars/tree-sitter-xml) | `5000ae8f22d11fbe93939b05c1e37cf21117162d` | MIT |

Highlight queries come from the same revisions. `any-of?` predicates are converted to equivalent anchored `match?` predicates supported by Runestone. Nix's `is-not? local` predicates are omitted because Runestone does not perform local-scope analysis; a locally shadowed builtin can therefore retain builtin highlighting. Org uses a small query written for Runestone's standard theme captures. Only syntax highlighting is provided; Org agendas, execution, and language servers are outside this package's scope.

Kotlin's upstream highlight query is derived from nvim-treesitter and retains its Apache-2.0 attribution; see `Licenses/KotlinQueries.txt`.

Parser and scanner sources are copied from the pinned revisions. The XML scanner includes `../common/scanner.h` instead of `../../common/scanner.h` to match the SwiftPM target layout; its shared scanner header is included in the target. Public headers and Swift wrappers follow this package’s conventions.

Consumers distributing these grammars should include the applicable notices from `Licenses/` in their acknowledgements. Kotlin’s query additionally requires its Apache-2.0 notice.

## Verification

Run `python3 scripts/check-language-grammars.py --runtime /path/to/tree-sitter` with a Tree-sitter checkout (or its `lib` directory). The script compiles the seven parsers, checks error-free sample parses, validates query predicates, and asserts representative positive and negative highlight captures. It has been validated with 0.20.9 and 0.27.1. It evaluates the supported predicate subset in Python; app integration tests remain responsible for Runestone's Swift predicate evaluator, rendering, and editing behavior.

Capture names are adapted to Runestone’s theme vocabulary: `character` → `string`, `exception` → `keyword.exception`, `parameter` → `variable.parameter`, `label` → `property`, `boolean` → `constant.builtin`, and XML `markup.link`/`markup.raw`/`markup.heading` → `text.uri`/`text.literal`/`punctuation.delimiter`. Plain XML character data remains unstyled by the default themes.
