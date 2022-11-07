import Runestone
import TreeSitterHaskell
import TreeSitterHaskellQueries

public extension TreeSitterLanguage {
    static var haskell: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHaskellQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_haskell(), highlightsQuery: highlightsQuery)
    }
}
