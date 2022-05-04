import Runestone
import TreeSitterRegex
import TreeSitterRegexQueries

public extension TreeSitterLanguage {
    static var regex: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRegexQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_regex(), highlightsQuery: highlightsQuery)
    }
}
