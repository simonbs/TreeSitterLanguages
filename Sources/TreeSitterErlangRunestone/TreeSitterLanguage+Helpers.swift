import Runestone
import TreeSitterErlang
import TreeSitterErlangQueries

public extension TreeSitterLanguage {
    static var erlang: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterErlangQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_erlang(), highlightsQuery: highlightsQuery)
    }
}
