import Runestone
import TreeSitterD
import TreeSitterDQueries

public extension TreeSitterLanguage {
    static var d: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterDQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_d(), highlightsQuery: highlightsQuery)
    }
}
