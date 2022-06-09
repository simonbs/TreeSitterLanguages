import Runestone
import TreeSitterObjC
import TreeSitterObjCQueries

public extension TreeSitterLanguage {
    static var objc: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterObjCQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_objc(), highlightsQuery: highlightsQuery)
    }
}
