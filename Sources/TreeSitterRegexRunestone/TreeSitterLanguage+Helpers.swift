import Runestone
import TreeSitterRegex
import TreeSitterRegexQueries

public extension TreeSitterLanguage {
    static var regex: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterRegexQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_regex(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}
