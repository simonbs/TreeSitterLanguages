import Runestone
import TreeSitterClojure
import TreeSitterClojureQueries

public extension TreeSitterLanguage {
    static var clojure: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterClojureQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_clojure(), highlightsQuery: highlightsQuery)
    }
}
