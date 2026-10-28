import Runestone
import TreeSitterRegex
import TreeSitterRegexQueries

public extension TreeSitterLanguage {
    static var regex: TreeSitterLanguage {
        let foldsQuery = TreeSitterRegexQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRegexQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_regex(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
