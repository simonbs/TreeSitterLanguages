import Runestone
import TreeSitterGo
import TreeSitterGoQueries

public extension TreeSitterLanguage {
    static var go: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterGoQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_go(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}
