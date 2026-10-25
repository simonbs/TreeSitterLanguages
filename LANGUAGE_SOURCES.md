# Requested language sources and quality gate

Nix and XML are retained after a parser and highlighting audit on 2026-10-25. Neither overlaps the ten additions in [PR #34](https://github.com/simonbs/TreeSitterLanguages/pull/34). Clojure, Fortran, Kotlin, Org, and PowerShell were removed because their selected grammars or queries did not meet the quality bar below.

## Retained sources

| Language | Upstream | Revision | License |
|---|---|---|---|
| Nix | [nix-community/tree-sitter-nix](https://github.com/nix-community/tree-sitter-nix) | `bae4c4fb39a4cc87a838817c5e2da7effac75183` | MIT |
| XML | [tree-sitter-grammars/tree-sitter-xml](https://github.com/tree-sitter-grammars/tree-sitter-xml) | `5000ae8f22d11fbe93939b05c1e37cf21117162d` | MIT |

Queries come from the same revisions. Include the applicable complete notices from `Licenses/` when distributing these grammars.

The parsers use ABI 13 (Nix) and 14 (XML), compatible with Tree-sitter 0.20.9 and 0.27.1. Nix is pinned to the last generated parser revision before ABI 15 to retain compatibility with the released Runestone dependency. Parser/scanner files are copied from these pins; the XML scanner include changes from `../../common/scanner.h` to `../common/scanner.h` for SwiftPM's target layout. Public headers and Swift wrappers follow this package's conventions.

## Query adaptations

- Convert XML's `any-of?` to an equivalent anchored `match?` predicate supported by Runestone. Map `markup.link`, `markup.raw`, and `markup.heading` to `text.uri`, `text.literal`, and `punctuation.delimiter`. Plain XML character data remains unstyled.
- Nix: use `function.call` for ordinary calls. Remove blanket property styling and restrict ordinary variable captures to variable expressions, preserving structural property/parameter captures. Native highlighter tests reproduce the previous same-range override and verify the correction with a theme that colors variables, properties, and functions differently.
- Omit Nix's `is-not? local` predicates because Runestone does not perform local-scope analysis. Locally shadowed builtins can retain builtin coloring. Interpolated plain identifiers can inherit their enclosing string color in themes without a variable/embedded style.

## Audit evidence

The gate requires ordinary syntax to parse correctly, meaningful coverage beyond literals, queries compatible with Runestone, and representative positive/negative capture checks. Absence of visible ERROR nodes alone is insufficient: PowerShell's range defect silently produced the wrong node kind, and Kotlin contains hidden missing-semicolon nodes. The persistent runner checks `ts_node_has_error` directly. This is a practical highlighting gate, not a claim of complete language conformance.

| Retained language | Pinned upstream corpus audit on 0.27.1 | Broader examples |
|---|---|---|
| Nix | 45 valid snippets match normalized named trees; 9 malformed cases produce errors | Four upstream Nix files and an expanded NixOS-style expression with interpolated strings, dotted attributes, paths, inheritance, builtins, and ordinary calls |
| XML | 10 valid snippets match normalized named trees; 6 malformed XML cases produce errors; standalone DTD cases excluded | 17 real app SVG/plist/storyboard files and declarations, namespaces, internal entities, processing instructions, CDATA, and comments |

### Known limitations

Compact internal XML DTD declarations with no separating whitespace, for example `<!DOCTYPE note [<!ELEMENT note ANY><!ENTITY custom "Entity">]>`, incorrectly produce missing-whitespace nodes. Whitespace-separated declarations parse cleanly. A diagnostic verified that downstream tags, attributes, entities, CDATA, and comments still receive their expected captures after recovery. This package exposes XML, not a standalone DTD language. This narrow recovery limitation differs from the ordinary source-file failures that disqualified the candidates below.

The audit does not establish complete conformance, incremental-edit behavior, or every theme's appearance.

## Removed candidates

These findings concern the selected revisions and shipped queries, not whether the languages can be supported later.

| Removed language and audited revision | Concrete reason |
|---|---|
| Clojure — `e43eff80d17cf34852dcd92ca5e6986d23a7040f` | All 115 reader-corpus cases pass, but the [query](https://github.com/clj-commons/tree-sitter-clojure/blob/e43eff80d17cf34852dcd92ca5e6986d23a7040f/queries/highlights.scm) has no symbol/list/regex/discard patterns. `defn`, definition names, `let`, `if`, calls, and regex bodies are unstyled; `#_(def discarded 42)` still colors the discarded number normally. |
| Fortran — `a5a15a9796a7514ef812688134012d93de6a9824` | Ordinary fixed-form column-one comments and column-six continuations fail, despite advertising `.f` files. Free-form `allocate`, `deallocate`, `open`, `close`, `select`, `case`, `associate`, and `concurrent` lack meaningful highlighting. The 128 clean corpus snippets did not reveal these independent gaps. See [fixed-form issue #61](https://github.com/stadelmanma/tree-sitter-fortran/issues/61). |
| Kotlin — `1852ea17b7f60fb3f9d84e0b1555d56b46b39fb1` | Valid `interface Printer { fun print() }` produces hidden `MISSING _automatic_semicolon`; context parameters also fail. Direct error-flag checks pass only 17 of 20 representative examples despite 367 clean corpus snippets. Queries additionally miss modified/generic/extension function names and use unrecognized import/control-flow scopes. Scratch query fixes cannot resolve the parser defect. |
| Org — `64cfbc213f5a83da17632c95382a5a0a2f3357c1` | The custom query gives no captures for ordinary inline emphasis/code, links, tables, or footnotes; the parser exposes inline content as generic expressions. The archived grammar was also [removed from nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/pull/7634) at this exact pin. |
| PowerShell — `21b365bdcf4609a431f4acfd3af9eeca9a348927` | `$a = 1..3` silently parses/highlights the range as a command ([#115](https://github.com/wharflab/tree-sitter-powershell/issues/115)); a normal ValidateSet variable attribute produces an error ([#116](https://github.com/wharflab/tree-sitter-powershell/issues/116)); labeled breaks also fail. Queries omit classes/enums, modern operators, and builtin constants. Nine real upstream scripts parse, but do not catch these defects. |

## Repeatable checks

`python3 scripts/check-language-grammars.py --runtime /path/to/tree-sitter` compiles each retained parser once, validates every query predicate, and runs the four fixtures in `Tests/Requested/` (46 expected captures and five excluded captures). The existing compatibility runner invokes these checks, including in the 0.27.1 CI job. Use repeatable `--language` arguments for a subset. Its Python predicate evaluator does not substitute for native Swift evaluation.

`RequestedLanguageHighlightTests` additionally executes Runestone's production parser, Swift predicate evaluator, capture sorting, and attributed-string highlighter on iOS. It checks Nix contextual styling and XML entity predicates with Unicode source. It uses internal highlighter entry points because the released Runestone dependency predates the public string-highlighter API.

Run the two native tests with the `TreeSitterLanguages-Package` scheme and `-only-testing:RequestedLanguageHighlightTests` on an iOS Simulator. These native tests have been run locally; the existing CI runs the C/Python fixtures and package build, not native unit tests. The installed SDK requires the existing build-only `IPHONEOS_DEPLOYMENT_TARGET=16.0` override for Runestone 0.4.1's find-interaction availability issue; this does not change the package's deployment requirement.
