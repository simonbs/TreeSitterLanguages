import Runestone
import TreeSitterOrg
import TreeSitterOrgQueries

public extension TreeSitterLanguage {
    static var org: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterOrgQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_org(), highlightsQuery: highlightsQuery)
    }
}
