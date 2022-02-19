import Runestone
import TreeSitterRust
import TreeSitterRustQueries

public extension TreeSitterLanguage {
    static var rust: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterRustQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterQuery(contentsOf: TreeSitterRustQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_rust(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .rust)
    }
}
