import Runestone
import TreeSitterJSDoc
import TreeSitterJSDocQueries

public extension TreeSitterLanguage {
    static var jsDoc: TreeSitterLanguage {
        let foldsQuery = TreeSitterJSDocQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJSDocQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_jsdoc(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
