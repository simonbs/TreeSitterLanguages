import Runestone
import TreeSitterSwift
import TreeSitterSwiftQueries

public extension TreeSitterLanguage {
    static var swift: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterSwiftQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_swift(), highlightsQuery: highlightsQuery, indentationScopes: .swift)
    }
}
