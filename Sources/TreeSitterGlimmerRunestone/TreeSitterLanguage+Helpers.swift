import Runestone
import TreeSitterGlimmer
import TreeSitterGlimmerQueries

public extension TreeSitterLanguage {
    static var glimmer: TreeSitterLanguage {
        let foldsQuery = TreeSitterGlimmerQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGlimmerQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGlimmerQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_glimmer(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, foldsQuery: foldsQuery)
    }
}
