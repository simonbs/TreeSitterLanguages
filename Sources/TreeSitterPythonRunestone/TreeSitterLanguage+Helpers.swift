import Runestone
import TreeSitterPython
import TreeSitterPythonQueries

public extension TreeSitterLanguage {
    static var python: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterPythonQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_python(), highlightsQuery: highlightsQuery, indentationScopes: .python)
    }
}
