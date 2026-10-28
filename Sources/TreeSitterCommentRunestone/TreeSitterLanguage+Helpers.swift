import Foundation
import Runestone
import TreeSitterComment
import TreeSitterCommentQueries

public extension TreeSitterLanguage {
    static var comment: TreeSitterLanguage {
        let foldsQuery = TreeSitterCommentQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCommentQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_comment(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
