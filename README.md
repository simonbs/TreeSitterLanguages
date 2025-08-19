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

Furthermore the package contains the TreeSitterLanguagesCommon library which exposes base types from Tree-sitter like `TSLanguage`. This is useful when you need to refer to these types in your source code, for example if you return a `TSLanguage` from a function.

## Compatibility

The parser.c file of a language is generated using [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) and a language generated with one version of the CLI may not be compatible with future versions of Tree-sitter. All languages in this repository are kept compatible with the version of Tree-sitter used by my [Runestone](https://github.com/simonbs/runestone) framework.

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
- [tree-sitter-markdown](https://github.com/MDeiml/tree-sitter-markdown)
- [tree-sitter-nim](https://github.com/alaviss/tree-sitter-nim)
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
- [tree-sitter-yaml](https://github.com/ikatyang/tree-sitter-yaml)
- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
