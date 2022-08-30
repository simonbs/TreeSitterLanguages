import Runestone
import TreeSitterGQL
import TreeSitterGQLQueries

@available(iOS 14.0, *)
public extension TreeSitterLanguage {
    static var graphql: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGQLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_graphql(), highlightsQuery: highlightsQuery)
    }
}
