import Runestone
import TreeSitterStarlark
import TreeSitterStarlarkQueries

public extension TreeSitterLanguage {
    static var starlark: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterStarlarkQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_starlark(), highlightsQuery: highlightsQuery)
    }
}
