import Runestone
import TreeSitterCSharp
import TreeSitterCSharpQueries

public extension TreeSitterLanguage {
    static var cSharp: TreeSitterLanguage {
        let foldsQuery = TreeSitterCSharpQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCSharpQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_c_sharp(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
