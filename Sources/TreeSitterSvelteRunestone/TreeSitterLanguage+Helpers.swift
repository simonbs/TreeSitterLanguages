import Runestone
import TreeSitterSvelte
import TreeSitterSvelteQueries

public extension TreeSitterLanguage {
    static var svelte: TreeSitterLanguage {
        let foldsQuery = TreeSitterSvelteQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSvelteQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSvelteQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_svelte(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, foldsQuery: foldsQuery)
    }
}
