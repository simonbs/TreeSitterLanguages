import Runestone
import TreeSitterHaskell
import TreeSitterHaskellQueries

public extension TreeSitterLanguage {
    static var haskell: TreeSitterLanguage {
        let foldsQuery = TreeSitterHaskellQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHaskellQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_haskell(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
