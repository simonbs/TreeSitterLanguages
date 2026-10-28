# Folding queries

The query products bundle folding definitions for 44 languages, including both
JavaScript factories (`javaScript` and `jsx`). Each `Query.foldsFileURL` is optional;
Comment, JSDoc, JSON5, MarkdownInline, R, and Regex return `nil` because the selected
sources do not provide folding queries for them. The Runestone factories pass the
available query through `TreeSitterLanguage.foldsQuery`.

This branch depends on Runestone's companion `codex/code-folding` branch. Replace
that branch requirement with a released version containing the folding API before
publishing a semantic-versioned package release.

## Sources and reproduction

[`FoldingQueries/sources.json`](FoldingQueries/sources.json) records every source's
repository, full revision, path, SHA-256 checksum, and license notice. Unmodified
inputs are retained in `FoldingQueries/Upstream` so normal regeneration is offline.
The grammar's own pinned folding query is preferred for Bicep, CMake, Glimmer,
ObjectiveC, Perl, Proto, Svelte, and Swift. Other languages use nvim-treesitter at
`a2f694478be07f89c2d03cc17858a8745a400c4b`.

```sh
python3 scripts/import-folding-queries.py
python3 scripts/import-folding-queries.py --check
```

`--download` verifies retained inputs against their pinned remote URLs. To update
a source deliberately, change its manifest revision and remove its old checksum,
download again, then inspect the query changes and run native validation.

The importer expands Neovim `; inherits:` modelines recursively into standalone
queries, including shared ECMAScript/JSX queries and the C/HTML definitions used by
ObjectiveC/Svelte. It records the source URL before each composed section. Consumers
do not need Neovim's query loader.

## Query interpretation

`folds.scm` and `@fold` follow the Neovim folding convention, using Tree-sitter's
query language. Captures repeated within one match, such as adjacent imports or
comments, describe one grouped range. The consumer supplies line-boundary rules,
multiline filtering, nesting, and folding state. Markdown uses `#trim!`; Elm uses
`#not-has-parent?`. These application-level operations are implemented by the
companion Runestone folding extractor; the Tree-sitter C runtime does not evaluate
them itself.

Markdown has one deliberate adaptation. The original Neovim query remains in the
retained inputs, but the generated query removes its generic `(section) @fold`
candidate and appends `@fold.heading` captures for ATX and Setext headings. The
selected grammar only groups ATX headings into sections and also aliases preamble
content as a section. Runestone derives section boundaries from both heading
styles, so mixed documents receive consistent folds. Fenced blocks, indented code
blocks, and list candidates from the upstream query remain available.

## Validation

```sh
python3 Tests/Folding/test.py --runtime /path/to/tree-sitter
python3 scripts/check-language-support.py
```

The native check compiles every available query against its shipped grammar and
executes it over existing parser fixtures. It checks standalone inheritance and
the supported directive vocabulary. This is query compatibility evidence;
Runestone's extraction tests cover grouped ranges, directives, and Markdown
section semantics. The existing native umbrella consumer test also checks the
public factory configuration and prepared folding queries, catching missing
SwiftPM resources or factory wiring.

## Attribution

Retain the notices in `Licenses/Folding` when distributing these queries. The eight
grammar-hosted sources carry their repository MIT notices. The nvim-treesitter
queries and inherited definitions carry the retained Apache-2.0 license. Original
source comments are preserved; generated files prominently identify composition
and adaptations. Existing parser/highlighting notices remain applicable to those
separate assets.
