import Runestone
import TreeSitterSQL
import TreeSitterSQLQueries

public extension TreeSitterLanguage {
    static var sql: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSQLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_sql(), highlightsQuery: highlightsQuery)
    }
}
