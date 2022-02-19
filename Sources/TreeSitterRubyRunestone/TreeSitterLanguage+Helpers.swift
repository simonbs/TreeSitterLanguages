import Runestone
import TreeSitterRuby
import TreeSitterRubyQueries

public extension TreeSitterLanguage {
    static var ruby: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterRubyQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_ruby(), highlightsQuery: highlightsQuery, indentationScopes: .ruby)
    }
}
