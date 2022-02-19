import Runestone
import TreeSitterRuby
import TreeSitterRubyQueries

public extension TreeSitterLanguage {
    static var ruby: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRubyQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_ruby(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .ruby)
    }
}
