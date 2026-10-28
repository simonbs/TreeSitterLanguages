import Runestone
import TreeSitterJava
import TreeSitterJavaQueries

public extension TreeSitterLanguage {
    static var java: TreeSitterLanguage {
        let foldsQuery = TreeSitterJavaQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJavaQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_java(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
