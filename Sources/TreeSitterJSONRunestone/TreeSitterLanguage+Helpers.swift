import Runestone
import TreeSitterJSON
import TreeSitterJSONQueries

public extension TreeSitterLanguage {
    static var json: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterJSONQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_json(), highlightsQuery: highlightsQuery, indentationScopes: .json)
    }
}
