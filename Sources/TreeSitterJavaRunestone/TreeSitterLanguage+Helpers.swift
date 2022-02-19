import Runestone
import TreeSitterJava
import TreeSitterJavaQueries

public extension TreeSitterLanguage {
    static var java: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterJavaQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_java(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}
