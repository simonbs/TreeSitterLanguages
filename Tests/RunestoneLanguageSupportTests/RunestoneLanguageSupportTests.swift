@testable import Runestone
import RunestoneLanguageSupport
import XCTest

final class RunestoneLanguageSupportTests: XCTestCase {
    // Only the umbrella is a language dependency: direct wrapper imports would
    // hide missing re-exports from clients of this product.
    func testEveryLanguageIsAvailableThroughTheUmbrella() {
        let languages: [(String, TreeSitterLanguage)] = [
            ("astro", .astro),
            ("bash", .bash),
            ("bicep", .bicep),
            ("cmake", .cmake),
            ("cpp", .cpp),
            ("c", .c),
            ("css", .css),
            ("cSharp", .cSharp),
            ("comment", .comment),
            ("dart", .dart),
            ("diff", .diff),
            ("elixir", .elixir),
            ("elm", .elm),
            ("fish", .fish),
            ("glimmer", .glimmer),
            ("go", .go),
            ("hcl", .hcl),
            ("html", .html),
            ("haskell", .haskell),
            ("jsDoc", .jsDoc),
            ("json5", .json5),
            ("json", .json),
            ("java", .java),
            ("javaScript", .javaScript),
            ("jsx", .jsx),
            ("julia", .julia),
            ("latex", .latex),
            ("lua", .lua),
            ("markdownInline", .markdownInline),
            ("markdown", .markdown),
            ("nix", .nix),
            ("ocaml", .ocaml),
            ("objectiveC", .objectiveC),
            ("php", .php),
            ("pascal", .pascal),
            ("perl", .perl),
            ("proto", .proto),
            ("python", .python),
            ("r", .r),
            ("regex", .regex),
            ("ruby", .ruby),
            ("rust", .rust),
            ("scss", .scss),
            ("sql", .sql),
            ("scala", .scala),
            ("svelte", .svelte),
            ("swift", .swift),
            ("toml", .toml),
            ("tsx", .tsx),
            ("typeScript", .typeScript),
            ("xml", .xml),
            ("yaml", .yaml),
        ]
        let languagesWithoutFolding: Set<String> = ["comment", "jsDoc", "json5", "markdownInline", "r", "regex"]
        for (name, language) in languages {
            XCTAssertNotNil(language.highlightsQuery, "Missing highlights for \(name)")
            XCTAssertEqual(language.foldsQuery != nil, !languagesWithoutFolding.contains(name), "Missing or unexpected folds for \(name)")
            language.prepare()
            XCTAssertNotNil(language.internalLanguage.highlightsQuery, "Invalid highlights for \(name)")
            if language.foldsQuery != nil {
                XCTAssertNotNil(language.internalLanguage.foldsQuery, "Invalid folds for \(name)")
            }
            if language.injectionsQuery != nil {
                XCTAssertNotNil(language.internalLanguage.injectionsQuery, "Invalid injections for \(name)")
            }
        }
    }
}
