import Foundation
import MappedTreeSitterAstro
import MappedTreeSitterBash
import MappedTreeSitterBicep
import MappedTreeSitterC
import MappedTreeSitterCMake
import MappedTreeSitterCPP
import MappedTreeSitterCSS
import MappedTreeSitterCSharp
import MappedTreeSitterComment
import MappedTreeSitterDart
import MappedTreeSitterDiff
import MappedTreeSitterElixir
import MappedTreeSitterElm
import MappedTreeSitterFish
import MappedTreeSitterGlimmer
import MappedTreeSitterGo
import MappedTreeSitterHCL
import MappedTreeSitterHTML
import MappedTreeSitterHaskell
import MappedTreeSitterJSDoc
import MappedTreeSitterJSON
import MappedTreeSitterJSON5
import MappedTreeSitterJava
import MappedTreeSitterJavaScript
import MappedTreeSitterJulia
import MappedTreeSitterLaTeX
import MappedTreeSitterLua
import MappedTreeSitterNix
import MappedTreeSitterOCaml
import MappedTreeSitterObjectiveC
import MappedTreeSitterPHP
import MappedTreeSitterPascal
import MappedTreeSitterPerl
import MappedTreeSitterProto
import MappedTreeSitterPython
import MappedTreeSitterR
import MappedTreeSitterRegex
import MappedTreeSitterRuby
import MappedTreeSitterRust
import MappedTreeSitterSCSS
import MappedTreeSitterSQL
import MappedTreeSitterScala
import MappedTreeSitterSvelte
import MappedTreeSitterSwift
import MappedTreeSitterTOML
import MappedTreeSitterTSX
import MappedTreeSitterTypeScript
import MappedTreeSitterXML
import MappedTreeSitterYAML

/// Grammars whose immutable parse tables are mapped from package resources on first use.
/// Returned pointers remain valid for the process lifetime. A resource or allocation failure returns nil.
public enum MappedTreeSitterLanguages {
    public enum Grammar: String, CaseIterable {
        case astro
        case bash
        case bicep
        case c
        case cmake
        case cpp
        case css
        case cSharp
        case comment
        case dart
        case diff
        case elixir
        case elm
        case fish
        case glimmer
        case go
        case hcl
        case html
        case haskell
        case jsdoc
        case json
        case json5
        case java
        case javaScript
        case julia
        case latex
        case lua
        case nix
        case ocaml
        case objectiveC
        case php
        case pascal
        case perl
        case proto
        case python
        case r
        case regex
        case ruby
        case rust
        case scss
        case sql
        case scala
        case svelte
        case swift
        case toml
        case tsx
        case typeScript
        case xml
        case yaml
    }

    public static func language(_ grammar: Grammar) -> OpaquePointer? {
        switch grammar {
        case .astro: return Languages.astro
        case .bash: return Languages.bash
        case .bicep: return Languages.bicep
        case .c: return Languages.c
        case .cmake: return Languages.cmake
        case .cpp: return Languages.cpp
        case .css: return Languages.css
        case .cSharp: return Languages.cSharp
        case .comment: return Languages.comment
        case .dart: return Languages.dart
        case .diff: return Languages.diff
        case .elixir: return Languages.elixir
        case .elm: return Languages.elm
        case .fish: return Languages.fish
        case .glimmer: return Languages.glimmer
        case .go: return Languages.go
        case .hcl: return Languages.hcl
        case .html: return Languages.html
        case .haskell: return Languages.haskell
        case .jsdoc: return Languages.jsdoc
        case .json: return Languages.json
        case .json5: return Languages.json5
        case .java: return Languages.java
        case .javaScript: return Languages.javaScript
        case .julia: return Languages.julia
        case .latex: return Languages.latex
        case .lua: return Languages.lua
        case .nix: return Languages.nix
        case .ocaml: return Languages.ocaml
        case .objectiveC: return Languages.objectiveC
        case .php: return Languages.php
        case .pascal: return Languages.pascal
        case .perl: return Languages.perl
        case .proto: return Languages.proto
        case .python: return Languages.python
        case .r: return Languages.r
        case .regex: return Languages.regex
        case .ruby: return Languages.ruby
        case .rust: return Languages.rust
        case .scss: return Languages.scss
        case .sql: return Languages.sql
        case .scala: return Languages.scala
        case .svelte: return Languages.svelte
        case .swift: return Languages.swift
        case .toml: return Languages.toml
        case .tsx: return Languages.tsx
        case .typeScript: return Languages.typeScript
        case .xml: return Languages.xml
        case .yaml: return Languages.yaml
        }
    }
}

private enum Languages {
    static func load(_ name: String, _ constructor: (UnsafePointer<CChar>?) -> OpaquePointer?) -> OpaquePointer? {
        guard let url = Bundle.module.url(forResource: name, withExtension: "tables", subdirectory: "Tables") else {
            return nil
        }
        return url.withUnsafeFileSystemRepresentation { constructor($0) }
    }
    static let astro: OpaquePointer? = load("astro-f80ed54671a96cfc", tree_sitter_astro_from_file)
    static let bash: OpaquePointer? = load("bash-1cd5ffb043fe8494", tree_sitter_bash_from_file)
    static let bicep: OpaquePointer? = load("bicep-3b997d1e2dd3ad96", tree_sitter_bicep_from_file)
    static let c: OpaquePointer? = load("c-7397a69384c45175", tree_sitter_c_from_file)
    static let cmake: OpaquePointer? = load("cmake-60d94f2f124bd158", tree_sitter_cmake_from_file)
    static let cpp: OpaquePointer? = load("cpp-dfa3bffa2f8377b3", tree_sitter_cpp_from_file)
    static let css: OpaquePointer? = load("css-2d6f637c894ad6c3", tree_sitter_css_from_file)
    static let cSharp: OpaquePointer? = load("c_sharp-42d33dbf086704b1", tree_sitter_c_sharp_from_file)
    static let comment: OpaquePointer? = load("comment-dfde2243fe94f65d", tree_sitter_comment_from_file)
    static let dart: OpaquePointer? = load("dart-4b4c68e8675be0c7", tree_sitter_dart_from_file)
    static let diff: OpaquePointer? = load("diff-f375af9551e991ff", tree_sitter_diff_from_file)
    static let elixir: OpaquePointer? = load("elixir-2920970c30dc1164", tree_sitter_elixir_from_file)
    static let elm: OpaquePointer? = load("elm-9fc9642c26e127f8", tree_sitter_elm_from_file)
    static let fish: OpaquePointer? = load("fish-20f20d6794875ecf", tree_sitter_fish_from_file)
    static let glimmer: OpaquePointer? = load("glimmer-1af54dffa7736ed9", tree_sitter_glimmer_from_file)
    static let go: OpaquePointer? = load("go-d1604bc306662c6b", tree_sitter_go_from_file)
    static let hcl: OpaquePointer? = load("hcl-326a17f126fbfc3f", tree_sitter_hcl_from_file)
    static let html: OpaquePointer? = load("html-21f7e00ddaa51f4f", tree_sitter_html_from_file)
    static let haskell: OpaquePointer? = load("haskell-52f4b127af7fdaa7", tree_sitter_haskell_from_file)
    static let jsdoc: OpaquePointer? = load("jsdoc-361458327a159f56", tree_sitter_jsdoc_from_file)
    static let json: OpaquePointer? = load("json-a3e16c55c00521ee", tree_sitter_json_from_file)
    static let json5: OpaquePointer? = load("json5-87f55adc1192f77f", tree_sitter_json5_from_file)
    static let java: OpaquePointer? = load("java-084a069a7d3856eb", tree_sitter_java_from_file)
    static let javaScript: OpaquePointer? = load("javascript-3f41d2c9aa7388bd", tree_sitter_javascript_from_file)
    static let julia: OpaquePointer? = load("julia-1729b37898d85147", tree_sitter_julia_from_file)
    static let latex: OpaquePointer? = load("latex-838142cd3493cbf5", tree_sitter_latex_from_file)
    static let lua: OpaquePointer? = load("lua-161d492f16772d63", tree_sitter_lua_from_file)
    static let nix: OpaquePointer? = load("nix-ee4007035398a813", tree_sitter_nix_from_file)
    static let ocaml: OpaquePointer? = load("ocaml-61ab8ea270d50045", tree_sitter_ocaml_from_file)
    static let objectiveC: OpaquePointer? = load("objc-58eb557d6cef5915", tree_sitter_objc_from_file)
    static let php: OpaquePointer? = load("php-24f1748e39dee22e", tree_sitter_php_from_file)
    static let pascal: OpaquePointer? = load("pascal-03055674b81431b3", tree_sitter_pascal_from_file)
    static let perl: OpaquePointer? = load("perl-fe36e2f340e50ac5", tree_sitter_perl_from_file)
    static let proto: OpaquePointer? = load("proto-8c4d3f9b093340c9", tree_sitter_proto_from_file)
    static let python: OpaquePointer? = load("python-6c219ce8ec7bc5d0", tree_sitter_python_from_file)
    static let r: OpaquePointer? = load("r-fff804160bc36106", tree_sitter_r_from_file)
    static let regex: OpaquePointer? = load("regex-67df58f4d1410745", tree_sitter_regex_from_file)
    static let ruby: OpaquePointer? = load("ruby-b821393d5f745957", tree_sitter_ruby_from_file)
    static let rust: OpaquePointer? = load("rust-0abf8372dfd57902", tree_sitter_rust_from_file)
    static let scss: OpaquePointer? = load("scss-3a39bdaae917aab3", tree_sitter_scss_from_file)
    static let sql: OpaquePointer? = load("sql-55cc9b66b42c5a0a", tree_sitter_sql_from_file)
    static let scala: OpaquePointer? = load("scala-571cd0d533aa28dd", tree_sitter_scala_from_file)
    static let svelte: OpaquePointer? = load("svelte-9aba821d722ee363", tree_sitter_svelte_from_file)
    static let swift: OpaquePointer? = load("swift-6e2a51ad1cc65e91", tree_sitter_swift_from_file)
    static let toml: OpaquePointer? = load("toml-8a81984835231583", tree_sitter_toml_from_file)
    static let tsx: OpaquePointer? = load("tsx-46546d2f27f76ff9", tree_sitter_tsx_from_file)
    static let typeScript: OpaquePointer? = load("typescript-19c698cff20525d8", tree_sitter_typescript_from_file)
    static let xml: OpaquePointer? = load("xml-28342cada29c0774", tree_sitter_xml_from_file)
    static let yaml: OpaquePointer? = load("yaml-d8548835192f2b51", tree_sitter_yaml_from_file)
}
