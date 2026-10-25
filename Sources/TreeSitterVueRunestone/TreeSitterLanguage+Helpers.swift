import Runestone
import TreeSitterVue
import TreeSitterVueQueries

public extension TreeSitterLanguage {
    static var vue: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterVueQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterVueQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_vue(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
