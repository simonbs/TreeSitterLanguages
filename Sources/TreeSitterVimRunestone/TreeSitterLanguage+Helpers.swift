import Runestone
import TreeSitterVim
import TreeSitterVimQueries

public extension TreeSitterLanguage {
    static var vim: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterVimQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterVimQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_vim(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
