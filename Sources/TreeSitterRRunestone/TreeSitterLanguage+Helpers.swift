import Runestone
import TreeSitterR
import TreeSitterRQueries

public extension TreeSitterLanguage {
    static var r: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_r(), highlightsQuery: highlightsQuery)
    }
}
