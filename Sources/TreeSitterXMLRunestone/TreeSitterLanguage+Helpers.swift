import Runestone
import TreeSitterXML
import TreeSitterXMLQueries

public extension TreeSitterLanguage {
    static var xml: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterXMLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_xml(), highlightsQuery: highlightsQuery)
    }
}
