@testable import Runestone
import TreeSitterNixRunestone
import TreeSitterXMLRunestone
import UIKit
import XCTest

final class RequestedLanguageHighlightTests: XCTestCase {
    func testNixContextualCapturesSurviveGenericIdentifierStyling() {
        let source = "# æøå\n{ pkgs }: let greet = name: name; in { message = greet \"Hej\"; package = pkgs.callPackage ./default.nix {}; enabled = true; }"
        let result = highlight(source, language: .nix)
        assertColor(.blue, for: "greet", occurrence: 1, in: result)
        assertColor(.blue, for: "callPackage", in: result)
        assertColor(.red, for: "message", in: result)
        assertColor(.purple, for: "true", in: result)
        assertColor(.brown, for: "\"Hej\"", in: result)
        assertColor(.gray, for: "# æøå", in: result)
    }

    func testXMLCapturesAndEntityPredicatesWithUnicode() {
        let source = "<?xml version=\"1.0\"?><root name=\"æøå\"><child>&amp; &custom;</child><![CDATA[<literal>]]><!-- comment --></root>"
        let result = highlight(source, language: .xml)
        assertColor(.orange, for: "root", in: result)
        assertColor(.red, for: "name", in: result)
        assertColor(.brown, for: "\"æøå\"", in: result)
        assertColor(.purple, for: "&amp;", in: result)
        assertColor(.cyan, for: "&custom;", in: result)
        assertColor(.brown, for: "<literal>", in: result)
        assertColor(.gray, for: "<!-- comment -->", in: result)
    }

    // Exercise the production parser, Swift predicates, capture ordering and
    // attributed-string highlighter on the released Runestone runtime as well.
    private func highlight(_ source: String, language: TreeSitterLanguage) -> NSAttributedString {
        let text = NSMutableString(string: source)
        let view = StringView(string: text)
        let lines = LineManager(stringView: view)
        lines.rebuild()
        let mode = TreeSitterLanguageMode(language: language).makeInternalLanguageMode(stringView: view, lineManager: lines)
        mode.parse(text)
        let highlighter = mode.createLineSyntaxHighlighter()
        highlighter.theme = AuditTheme()
        let result = NSMutableAttributedString(string: source, attributes: [.font: highlighter.theme.font, .foregroundColor: UIColor.black])
        highlighter.syntaxHighlight(LineSyntaxHighlighterInput(attributedString: result, byteRange: ByteRange(from: 0, to: source.byteCount)))
        return result
    }

    private func assertColor(_ color: UIColor, for text: String, occurrence: Int = 0,
                             in result: NSAttributedString, file: StaticString = #filePath, line: UInt = #line) {
        let source = result.string as NSString
        var remaining = NSRange(location: 0, length: source.length)
        var range = NSRange(location: NSNotFound, length: 0)
        for _ in 0...occurrence {
            range = source.range(of: text, range: remaining)
            guard range.location != NSNotFound else {
                XCTFail("Missing fixture text: \(text)", file: file, line: line)
                return
            }
            remaining = NSRange(location: NSMaxRange(range), length: source.length - NSMaxRange(range))
        }
        for offset in range.location..<NSMaxRange(range) {
            XCTAssertEqual(result.attribute(.foregroundColor, at: offset, effectiveRange: nil) as? UIColor,
                           color, "Unexpected style for \(text) at UTF-16 offset \(offset)", file: file, line: line)
        }
    }
}

// Assign a color to generic variables too: a theme that leaves them unstyled can
// hide incorrect precedence between generic identifiers and contextual captures.
private final class AuditTheme: Theme {
    let font = UIFont.monospacedSystemFont(ofSize: 14, weight: .regular)
    let textColor = UIColor.black
    let gutterBackgroundColor = UIColor.white
    let gutterHairlineColor = UIColor.gray
    let lineNumberColor = UIColor.gray
    let lineNumberFont = UIFont.systemFont(ofSize: 12)
    let selectedLineBackgroundColor = UIColor.white
    let selectedLinesLineNumberColor = UIColor.black
    let selectedLinesGutterBackgroundColor = UIColor.white
    let invisibleCharactersColor = UIColor.gray
    let pageGuideHairlineColor = UIColor.gray
    let pageGuideBackgroundColor = UIColor.white
    let markedTextBackgroundColor = UIColor.white

    func textColor(for highlightName: String) -> UIColor? {
        if highlightName == "constant.builtin" || highlightName == "variable.builtin" { return .purple }
        if highlightName == "text.literal" { return .brown }
        switch highlightName.split(separator: ".").first {
        case "function": return .blue
        case "keyword": return .magenta
        case "property": return .red
        case "variable": return .green
        case "string": return .brown
        case "comment": return .gray
        case "constant": return .cyan
        case "tag": return .orange
        default: return nil
        }
    }
}
