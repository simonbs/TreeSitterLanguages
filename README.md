# TreeSitterLanguages

Languages for the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) parser generator wrapped in Swift packages.

## Motivation

There are two reasons this package exists:

1. As an easy way to add several Tree-sitter languages to an app and particularly to an app that uses the [Runestone](https://github.com/simonbs/runestone) framework.
2. To show how a Tree-sitter language can be wrapped in a Swift package.

It is not recommended to use this package if you only need to add a few Tree-sitter languages to your app. Instead you should add the languages manually.

## Installation

The languages are distributed using the [Swift Package Manager](https://www.swift.org/package-manager/) as separated libraries in a single Swift package. Install the package in your project by adding it as a dependency in your Package.swift manifest or through "Package Dependencies" in your project settings.

```swift
let package = Package(
    dependencies: [
        .package(url: "git@github.com:simonbs/TreeSitterLanguages.git", from: "0.1.0")
    ]
)
```

## Usage

The Swift package contains multiple libraries. Each language is wrapped in its own Swift package so you don't need to import a whole suite of languages in case you only need a few.

The package contains the following three libraries for each language.

|Name|Purpose|
|-|-|
|TreeSitter{Language}|The C code for the generated Tree-sitter parser. Each package exposes a function named like `tree_sitter_{language}`.|
|TreeSitter{Language}Queries|The queries to be used with the language. For more information on queries, please refer to [Tree-sitter's documentation](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#queries). The only reason this is a separate library and not part of the TreeSitter{Language} library is that C code and Swift code cannot be mixed in a library using Swift Package Manager.|
|TreeSitter{Language}Runestone|Exposes the language to be used with [Runestone](https://github.com/simonbs/runestone). This library depends on the TreeSitter{Language} and TreeSitter{Language}Queries libraries and it is the only library you need to import when using Runestone. The library exposes the language as an extension on [TreeSitterLanguage](https://github.com/simonbs/Runestone/blob/main/Sources/Runestone/Language/TreeSitter/TreeSitterLanguage.swift) (e.g. `TreeSitterLanguage.javaScript`) that's ready to be used in Runestone. It also includes the indentation specification for select languages.|

Furthermore the package contains the TreeSitterLanguagesCommon library which exposes Tree-sitter's scalar types and an opaque `TSLanguage` declaration. The language structure belongs to the runtime and must not be accessed directly. With Tree-sitter 0.27.1, Swift APIs that pass languages use `OpaquePointer`, including the values returned by `tree_sitter_{language}()`.

Pinned parser sources, licenses, query adaptations, and limitations are indexed in [LANGUAGE_SOURCES.md](LANGUAGE_SOURCES.md).

### All Runestone languages

Apps that use the full collection can depend on the `RunestoneLanguageSupport`
product instead of listing every `TreeSitter{Language}Runestone` product:

```swift
.target(
    name: "MyEditor",
    dependencies: [
        .product(name: "Runestone", package: "Runestone"),
        .product(name: "RunestoneLanguageSupport", package: "TreeSitterLanguages")
    ]
)
```

Then import the umbrella to make every bundled language extension available:

```swift
import Runestone
import RunestoneLanguageSupport

let language = TreeSitterLanguage.swift
```

This opt-in product includes all grammar and query resource dependencies, including
languages added to future package revisions. Use the individual products when you
want to limit build time and bundled resources. The umbrella does not provide file
extension detection or register injected languages; those remain the app's responsibility.
Runestone itself remains independent of this package.

## Folding queries

`Query.foldsFileURL` is an optional URL passed to `TreeSitterLanguage.foldsQuery`.
Folding is available for 44 languages; Comment, JSDoc, JSON5, MarkdownInline, R,
and Regex return `nil`. Runestone consumers enable controls with
`textView.isCodeFoldingEnabled = true`.

Folding queries come from the grammar repositories and Neovim's nvim-treesitter.
Markdown supports ATX and Setext sections as well as fenced code blocks.
See [source and maintenance details](LANGUAGE_SOURCES.md#folding-queries) for
pinned revisions, licenses, adaptations, and import commands.

## Compatibility

The parser.c file of a language is generated using [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) and a language generated with one version of the CLI may not be compatible with future versions of Tree-sitter. All languages in this repository are kept compatible with the version of Tree-sitter used by my [Runestone](https://github.com/simonbs/runestone) framework.

The grammars include ABI 15 and require Runestone’s Tree-sitter 0.27.1 integration. This branch also depends on the folding API in Runestone’s `codex/code-folding` branch. Replace the branch requirement with a release containing that API before publishing a semantic-versioned package release. Each grammar retains its matching private generated parser header.

The compatibility check compiles every bundled grammar against Tree-sitter 0.27.1, parses a representative sample, and compiles and executes every bundled query, including inherited highlight queries. Run it with a checkout of that Tree-sitter release:

```sh
git clone --depth 1 --branch v0.27.1 https://github.com/tree-sitter/tree-sitter.git /tmp/tree-sitter
python3 Tests/Compatibility/test.py /tmp/tree-sitter
```

Pass language names after the checkout path to rerun a subset, for example `JSON Swift SCSS`. This checks runtime and query compatibility; the iOS package build separately checks the Swift Runestone integrations.

## Acknowledgements

The TreeSitterLanguages repository contains files copied from the following repositories. I had originally added these repositories as submodules but it turned out to be very impractical when the package is used with Swift Package Manager because checking out the repository and all the submodules would take a long time and doing so on a slow connection (for example when commuting) would be unbearable.

Thanks to all the contributors to these repositories for their great effort in ensuring Tree-sitter supports a wide array of languages.

- [tree-sitter-astro](https://github.com/virchau13/tree-sitter-astro)
- [tree-sitter-bash](https://github.com/tree-sitter/tree-sitter-bash)
- [tree-sitter-c](https://github.com/tree-sitter/tree-sitter-c)
- [tree-sitter-comment](https://github.com/stsewd/tree-sitter-comment)
- [tree-sitter-c-sharp](https://github.com/tree-sitter/tree-sitter-c-sharp)
- [tree-sitter-cpp](https://github.com/tree-sitter/tree-sitter-cpp)
- [tree-sitter-css](https://github.com/tree-sitter/tree-sitter-css)
- [tree-sitter-elixir](https://github.com/elixir-lang/tree-sitter-elixir)
- [tree-sitter-elm](https://github.com/elm-tooling/tree-sitter-elm)
- [tree-sitter-go](https://github.com/tree-sitter/tree-sitter-go)
- [tree-sitter-haskell](https://github.com/tree-sitter/tree-sitter-haskell)
- [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html)
- [tree-sitter-java](https://github.com/tree-sitter/tree-sitter-java)
- [tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript)
- [tree-sitter-jsdoc](https://github.com/tree-sitter/tree-sitter-jsdoc)
- [tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json)
- [tree-sitter-json5](https://github.com/Joakker/tree-sitter-json5)
- [tree-sitter-julia](https://github.com/tree-sitter/tree-sitter-julia)
- [tree-sitter-latex](https://github.com/latex-lsp/tree-sitter-latex)
- [tree-sitter-lua](https://github.com/tjdevries/tree-sitter-lua)
- [tree-sitter-markdown](https://github.com/tree-sitter-grammars/tree-sitter-markdown)
- [tree-sitter-ocaml](https://github.com/tree-sitter/tree-sitter-ocaml)
- [tree-sitter-perl](https://github.com/ganezdragon/tree-sitter-perl)
- [tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php)
- [tree-sitter-python](https://github.com/tree-sitter/tree-sitter-python)
- [tree-sitter-r](https://github.com/r-lib/tree-sitter-r)
- [tree-sitter-regex](https://github.com/tree-sitter/tree-sitter-regex)
- [tree-sitter-ruby](https://github.com/tree-sitter/tree-sitter-ruby)
- [tree-sitter-rust](https://github.com/tree-sitter/tree-sitter-rust)
- [tree-sitter-scss](https://github.com/serenadeai/tree-sitter-scss)
- [tree-sitter-sql](https://github.com/DerekStride/tree-sitter-sql)
- [tree-sitter-svelte](https://github.com/Himujjal/tree-sitter-svelte)
- [tree-sitter-swift](https://github.com/alex-pinkus/tree-sitter-swift)
- [tree-sitter-toml](https://github.com/ikatyang/tree-sitter-toml)
- [tree-sitter-typescript](https://github.com/tree-sitter/tree-sitter-typescript)
- [tree-sitter-yaml](https://github.com/tree-sitter-grammars/tree-sitter-yaml)
- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
- [tree-sitter-nix](https://github.com/nix-community/tree-sitter-nix)
- [tree-sitter-xml](https://github.com/tree-sitter-grammars/tree-sitter-xml)

## Additional adopted languages

Bicep, CMake, Dart, Fish, Glimmer, HCL, ObjectiveC, Pascal, Proto, Scala.

See [language sources](LANGUAGE_SOURCES.md) for exact revisions and query adaptations.
