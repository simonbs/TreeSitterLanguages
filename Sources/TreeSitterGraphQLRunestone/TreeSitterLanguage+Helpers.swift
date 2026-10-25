import Runestone
import TreeSitterGraphQL
import TreeSitterGraphQLQueries

public extension TreeSitterLanguage {
    static var graphql: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGraphQLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_graphql(), highlightsQuery: highlightsQuery)
    }
}
