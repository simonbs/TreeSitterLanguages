import Runestone
import TreeSitterKDL
import TreeSitterKDLQueries

public extension TreeSitterLanguage {
    static var kdl: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterKDLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_kdl(), highlightsQuery: highlightsQuery)
    }
}
