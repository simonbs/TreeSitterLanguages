import Runestone
import TreeSitterRust
import TreeSitterRustQueries

public extension TreeSitterLanguage {
    static var rust: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRustQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRustQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_rust(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .rust)
    }
}
