import Runestone
import TreeSitterDiff
import TreeSitterDiffQueries

public extension TreeSitterLanguage {
    static var diff: TreeSitterLanguage {
        let foldsQuery = TreeSitterDiffQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterDiffQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_diff(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
