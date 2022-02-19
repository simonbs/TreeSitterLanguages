import Foundation
import Runestone
import TreeSitterCPP
import TreeSitterCPPQueries
import TreeSitterCQueries

public extension TreeSitterLanguage {
    static var cpp: TreeSitterLanguage {
        let highlightsQuery = combinedQuery(fromFilesAt: [TreeSitterCQueries.Query.highlightsFileURL, TreeSitterCPPQueries.Query.highlightsFileURL])
        return TreeSitterLanguage(tree_sitter_cpp(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}

private extension TreeSitterLanguage {
    private static func combinedQuery(fromFilesAt fileURLs: [URL]) -> TreeSitterQuery? {
        let rawQuery = fileURLs.compactMap { try? String(contentsOf: $0) }.joined(separator: "\n")
        if !rawQuery.isEmpty {
            return TreeSitterQuery(string: rawQuery)
        } else {
            return nil
        }
    }
}
