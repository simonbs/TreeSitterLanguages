import Runestone
import TreeSitterJulia
import TreeSitterJuliaQueries

public extension TreeSitterLanguage {
    static var julia: TreeSitterLanguage {
        let foldsQuery = TreeSitterJuliaQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJuliaQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJuliaQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_julia(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, foldsQuery: foldsQuery)
    }
}
