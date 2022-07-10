import Runestone
import TreeSitterAstro
import TreeSitterAstroQueries

public extension TreeSitterLanguage {
    static var astro: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterAstroQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterAstroQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_astro(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: nil)
    }
}
