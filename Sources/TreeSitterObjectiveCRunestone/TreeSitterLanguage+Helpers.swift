import Runestone
import TreeSitterObjectiveC
import TreeSitterObjectiveCQueries

public extension TreeSitterLanguage {
    static var objectiveC: TreeSitterLanguage {
        let foldsQuery = TreeSitterObjectiveCQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterObjectiveCQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_objc(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
