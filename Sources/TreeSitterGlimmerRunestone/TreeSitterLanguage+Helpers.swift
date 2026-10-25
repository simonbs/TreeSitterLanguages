import Runestone
import TreeSitterGlimmer
import TreeSitterGlimmerQueries

public extension TreeSitterLanguage {
    static var glimmer: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGlimmerQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGlimmerQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_glimmer(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
