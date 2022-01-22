import Runestone
import TreeSitterJSON
import TreeSitterJSONQueries

public extension TreeSitterLanguage {
    static var json: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJSONQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_json(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .json)
    }
}
