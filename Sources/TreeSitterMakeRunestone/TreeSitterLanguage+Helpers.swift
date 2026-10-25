import Runestone
import TreeSitterMake
import TreeSitterMakeQueries

public extension TreeSitterLanguage {
    static var make: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMakeQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMakeQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_make(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
