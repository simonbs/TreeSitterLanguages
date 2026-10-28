import Runestone
import TreeSitterElm
import TreeSitterElmQueries

public extension TreeSitterLanguage {
    static var elm: TreeSitterLanguage {
        let foldsQuery = TreeSitterElmQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterElmQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_elm(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
