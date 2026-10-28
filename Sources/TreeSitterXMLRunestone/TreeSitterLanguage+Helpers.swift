import Runestone
import TreeSitterXML
import TreeSitterXMLQueries

public extension TreeSitterLanguage {
    static var xml: TreeSitterLanguage {
        let foldsQuery = TreeSitterXMLQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterXMLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_xml(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
