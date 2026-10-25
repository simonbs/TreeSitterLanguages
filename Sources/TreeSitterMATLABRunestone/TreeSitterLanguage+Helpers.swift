import Runestone
import TreeSitterMATLAB
import TreeSitterMATLABQueries

public extension TreeSitterLanguage {
    static var matlab: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMATLABQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_matlab(), highlightsQuery: highlightsQuery)
    }
}
