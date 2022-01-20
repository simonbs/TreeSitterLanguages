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

## Usage

The Swift package contains multiple libraries. Each language is wrapped in its own Swift package so you don't need to import a whole suite of languages in case you only need a few.

There are two packages for each language. There's the TreeSitterXYZ package and the TreeSitterXYZQueries package where XYS is the language. The former package exposes the C function for the language (i.e. `tree_sitter_xyz()`) and the latter contains the queries for the language. The only reason a language is split into two packages is that Swift Package Manager doesn't allow mixing C code and Swift code.
