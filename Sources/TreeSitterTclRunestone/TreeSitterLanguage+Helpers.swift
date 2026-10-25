import Runestone
import TreeSitterTcl
import TreeSitterTclQueries

public extension TreeSitterLanguage {
    static var tcl: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterTclQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_tcl(), highlightsQuery: highlightsQuery)
    }
}
