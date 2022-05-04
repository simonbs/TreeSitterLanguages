import Runestone
import TreeSitterSvelte
import TreeSitterSvelteQueries

public extension TreeSitterLanguage {
    static var svelte: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSvelteQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSvelteQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_svelte(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
