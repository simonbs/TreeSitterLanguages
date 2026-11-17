// swift-tools-version: 5.5
import PackageDescription

let package = Package(
    name: "MappedGrammarConsumerTests",
    platforms: [.macOS(.v10_15)],
    dependencies: [.package(path: "../..")],
    targets: [
        .testTarget(name: "MappedTreeSitterLanguagesTests", dependencies: [
            .product(name: "MappedTreeSitterLanguages", package: "TreeSitterLanguages"),
            .product(name: "TreeSitterSQL", package: "TreeSitterLanguages")
        ])
    ]
)
