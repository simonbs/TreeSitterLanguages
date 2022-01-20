# TreeSitterLanguages

Languages for the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) parser generator wrapped in Swift packages.

## Installation

The languages are distributed using the [Swift Package Manager](https://www.swift.org/package-manager/) as separated libraries in a single Swift package. Install the package in your project by adding it as a dependency in your Package.swift manifest or through "Package Dependencies" in your project settings.

```swift
let package = Package(
    dependencies: [
        .package(url: "git@github.com:simonbs/TreeSitterLanguages.git", from: "0.1.0")
    ]
)
```

## Generate Languages

TreeSitterLanguage refers to the generated parsers for most languages. However, [tree-sitter-swift](https://github.com/alex-pinkus/tree-sitter-swift) does not include the parser (parser.c file) in the repository. That decision is [explained here](https://github.com/alex-pinkus/tree-sitter-swift#where-is-your-parserc). The `generate.sh` script in this repository can be run to generate and copy the parser.c file for the Swift language.

## Usage

The Swift package contains multiple libraries. Each language is wrapped in its own Swift package so you don't need to import a whole suite of languages in case you only need a few.

There are two packages for each language. There's the TreeSitterXYZ package and the TreeSitterXYZQueries package where XYS is the language. The former package exposes the C function for the language (i.e. `tree_sitter_xyz()`) and the latter contains the queries for the language. The only reason a language is split into two packages is that Swift Package Manager doesn't allow mixing C code and Swift code.

## Compatibility

The parser.c file of a language is generated using [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) and a language generated with one version of the CLI may not be compatible with future versions of Tree-sitter. All languages in this repository are kept compatible with the version of Tree-sitter used by my [Runestone](https://github.com/simonbs/runestone) framework.
