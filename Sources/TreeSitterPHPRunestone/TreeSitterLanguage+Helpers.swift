import Runestone
import TreeSitterPHP
import TreeSitterPHPQueries

public extension TreeSitterLanguage {
    static var php: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterPHPQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterQuery(contentsOf: TreeSitterPHPQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_php(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .php)
    }
}
