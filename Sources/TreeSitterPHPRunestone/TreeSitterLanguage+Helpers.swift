import Runestone
import TreeSitterPHP
import TreeSitterPHPQueries

public extension TreeSitterLanguage {
    static var php: TreeSitterLanguage {
        let foldsQuery = TreeSitterPHPQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPHPQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPHPQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_php(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .php, foldsQuery: foldsQuery)
    }
}
