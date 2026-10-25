import Runestone
import TreeSitterJinja
import TreeSitterJinjaQueries

public extension TreeSitterLanguage {
    static var jinja: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJinjaQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJinjaQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_jinja(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
