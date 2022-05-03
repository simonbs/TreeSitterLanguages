import Foundation
import Runestone
import TreeSitterJavaScript
import TreeSitterJavaScriptQueries

public extension TreeSitterLanguage {
    static var javaScript: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJavaScriptQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJavaScriptQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_javascript(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .javaScript)
    }

    static var jsx: TreeSitterLanguage {
        let highlightsQuery = combinedQuery(fromFilesAt: [
            TreeSitterJavaScriptQueries.Query.highlightsFileURL,
            TreeSitterJavaScriptQueries.Query.highlightsJSXFileURL
        ])
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterJavaScriptQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_javascript(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .javaScript)
    }
}

private extension TreeSitterLanguage {
    private static func combinedQuery(fromFilesAt fileURLs: [URL]) -> TreeSitterLanguage.Query? {
        let rawQuery = fileURLs.compactMap { try? String(contentsOf: $0) }.joined(separator: "\n")
        if !rawQuery.isEmpty {
            return TreeSitterLanguage.Query(string: rawQuery)
        } else {
            return nil
        }
    }
}
