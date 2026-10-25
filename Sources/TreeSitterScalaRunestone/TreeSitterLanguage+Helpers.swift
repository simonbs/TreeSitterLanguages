import Runestone
import TreeSitterScala
import TreeSitterScalaQueries

public extension TreeSitterLanguage {
    static var scala: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterScalaQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_scala(), highlightsQuery: highlightsQuery)
    }
}
