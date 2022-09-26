import Runestone
import TreeSitterJulia
import TreeSitterJuliaQueries

public extension TreeSitterLanguage {
    static var julia: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJuliaQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJuliaQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_julia(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
