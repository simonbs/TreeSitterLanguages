import Runestone
import TreeSitterPython
import TreeSitterPythonQueries

public extension TreeSitterLanguage {
    static var python: TreeSitterLanguage {
        let foldsQuery = TreeSitterPythonQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPythonQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_python(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .python, foldsQuery: foldsQuery)
    }
}
