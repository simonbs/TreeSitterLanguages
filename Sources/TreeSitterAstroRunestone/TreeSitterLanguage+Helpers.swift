import Runestone
import TreeSitterAstro
import TreeSitterAstroQueries

public extension TreeSitterLanguage {
    static var astro: TreeSitterLanguage {
        let foldsQuery = TreeSitterAstroQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterAstroQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterAstroQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_astro(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: nil, foldsQuery: foldsQuery)
    }
}
