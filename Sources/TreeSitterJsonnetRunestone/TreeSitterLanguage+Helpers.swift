import Runestone
import TreeSitterJsonnet
import TreeSitterJsonnetQueries

public extension TreeSitterLanguage {
    static var jsonnet: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJsonnetQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_jsonnet(), highlightsQuery: highlightsQuery)
    }
}
