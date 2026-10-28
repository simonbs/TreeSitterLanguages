import Runestone
import TreeSitterSQL
import TreeSitterSQLQueries

public extension TreeSitterLanguage {
    static var sql: TreeSitterLanguage {
        let foldsQuery = TreeSitterSQLQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSQLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_sql(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
