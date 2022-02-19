import Runestone
import TreeSitterSwift
import TreeSitterSwiftQueries

public extension TreeSitterLanguage {
    static var swift: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSwiftQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_swift(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .swift)
    }
}
