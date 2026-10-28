import Runestone
import TreeSitterScala
import TreeSitterScalaQueries

public extension TreeSitterLanguage {
    static var scala: TreeSitterLanguage {
        let foldsQuery = TreeSitterScalaQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterScalaQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_scala(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
