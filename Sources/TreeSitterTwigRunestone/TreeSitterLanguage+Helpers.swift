import Runestone
import TreeSitterTwig
import TreeSitterTwigQueries

public extension TreeSitterLanguage {
    static var twig: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterTwigQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterTwigQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_twig(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
