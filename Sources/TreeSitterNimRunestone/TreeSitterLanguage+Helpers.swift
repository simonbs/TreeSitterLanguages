import Runestone
import TreeSitterNim
import TreeSitterNimQueries

public extension TreeSitterLanguage {
    static var nim: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterNimQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_nim(), highlightsQuery: highlightsQuery)
    }
}