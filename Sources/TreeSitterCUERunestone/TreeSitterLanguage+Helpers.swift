import Runestone
import TreeSitterCUE
import TreeSitterCUEQueries

public extension TreeSitterLanguage {
    static var cue: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCUEQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_cue(), highlightsQuery: highlightsQuery)
    }
}
