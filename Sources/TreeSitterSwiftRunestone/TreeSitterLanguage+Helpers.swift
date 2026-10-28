import Runestone
import TreeSitterSwift
import TreeSitterSwiftQueries

public extension TreeSitterLanguage {
    static var swift: TreeSitterLanguage {
        let foldsQuery = TreeSitterSwiftQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSwiftQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_swift(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .swift, foldsQuery: foldsQuery)
    }
}
