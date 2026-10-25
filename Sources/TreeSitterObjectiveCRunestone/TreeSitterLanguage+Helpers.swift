import Runestone
import TreeSitterObjectiveC
import TreeSitterObjectiveCQueries

public extension TreeSitterLanguage {
    static var objectiveC: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterObjectiveCQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_objc(), highlightsQuery: highlightsQuery)
    }
}
