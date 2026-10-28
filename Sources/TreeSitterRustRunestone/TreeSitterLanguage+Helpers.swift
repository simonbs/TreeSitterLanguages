import Runestone
import TreeSitterRust
import TreeSitterRustQueries

public extension TreeSitterLanguage {
    static var rust: TreeSitterLanguage {
        let foldsQuery = TreeSitterRustQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRustQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRustQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_rust(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .rust, foldsQuery: foldsQuery)
    }
}
