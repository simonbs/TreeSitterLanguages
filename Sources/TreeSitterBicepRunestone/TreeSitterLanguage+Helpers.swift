import Runestone
import TreeSitterBicep
import TreeSitterBicepQueries

public extension TreeSitterLanguage {
    static var bicep: TreeSitterLanguage {
        let foldsQuery = TreeSitterBicepQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterBicepQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_bicep(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
