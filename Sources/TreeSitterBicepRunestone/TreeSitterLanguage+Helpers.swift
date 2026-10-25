import Runestone
import TreeSitterBicep
import TreeSitterBicepQueries

public extension TreeSitterLanguage {
    static var bicep: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterBicepQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_bicep(), highlightsQuery: highlightsQuery)
    }
}
