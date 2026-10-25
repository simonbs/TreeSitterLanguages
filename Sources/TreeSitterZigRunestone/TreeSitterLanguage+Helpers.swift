import Runestone
import TreeSitterZig
import TreeSitterZigQueries

public extension TreeSitterLanguage {
    static var zig: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterZigQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_zig(), highlightsQuery: highlightsQuery)
    }
}
