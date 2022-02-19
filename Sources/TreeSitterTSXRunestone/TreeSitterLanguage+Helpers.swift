import Foundation
import Runestone
import TreeSitterTSX
import TreeSitterTSXQueries
import TreeSitterJavaScriptQueries

public extension TreeSitterLanguage {
    static var tsx: TreeSitterLanguage {
        let highlightsQuery = combinedQuery(fromFilesAt: [
            TreeSitterJavaScriptQueries.Query.highlightsFileURL,
            TreeSitterJavaScriptQueries.Query.highlightsJSXFileURL,
            TreeSitterTSXQueries.Query.highlightsFileURL
        ])
        return TreeSitterLanguage(tree_sitter_tsx(), highlightsQuery: highlightsQuery, indentationScopes: nil)
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

