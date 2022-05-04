import Runestone
import TreeSitterElm
import TreeSitterElmQueries

public extension TreeSitterLanguage {
    static var elm: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterElmQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_elm(), highlightsQuery: highlightsQuery)
    }
}
