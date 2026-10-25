import Runestone
import TreeSitterLiquid
import TreeSitterLiquidQueries

public extension TreeSitterLanguage {
    static var liquid: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLiquidQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLiquidQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_liquid(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
