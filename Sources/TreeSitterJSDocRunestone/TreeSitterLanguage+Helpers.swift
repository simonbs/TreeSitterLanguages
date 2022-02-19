import Runestone
import TreeSitterJSDoc
import TreeSitterJSDocQueries

public extension TreeSitterLanguage {
    static var jsDoc: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterJSDocQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_jsdoc(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}
