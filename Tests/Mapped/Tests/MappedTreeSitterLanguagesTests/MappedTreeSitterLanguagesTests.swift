import Foundation
import MappedTreeSitterLanguages
import TreeSitterSQL
import XCTest

final class MappedTreeSitterLanguagesTests: XCTestCase {
    func testNativeAndMappedProductsCanBeLinkedTogether() throws {
        let native = try XCTUnwrap(tree_sitter_sql())
        let mapped = try XCTUnwrap(MappedTreeSitterLanguages.language(.sql))
        XCTAssertNotEqual(native, mapped)
    }

    func testEveryGrammarLoadsFromThePackageResourceBundle() throws {
        XCTAssertEqual(MappedTreeSitterLanguages.Grammar.allCases.count, 49)
        for grammar in MappedTreeSitterLanguages.Grammar.allCases {
            let first = try XCTUnwrap(MappedTreeSitterLanguages.language(grammar), grammar.rawValue)
            XCTAssertEqual(first, MappedTreeSitterLanguages.language(grammar), grammar.rawValue)
        }
    }

    func testConcurrentFirstAccessPublishesOneLanguagePerGrammar() {
        let lock = NSLock()
        var loaded: [MappedTreeSitterLanguages.Grammar: Set<UInt>] = [:]
        DispatchQueue.concurrentPerform(iterations: 8) { _ in
            for grammar in MappedTreeSitterLanguages.Grammar.allCases {
                let pointer = MappedTreeSitterLanguages.language(grammar)
                lock.lock()
                loaded[grammar, default: []].insert(pointer.map { UInt(bitPattern: $0) } ?? 0)
                lock.unlock()
            }
        }
        for grammar in MappedTreeSitterLanguages.Grammar.allCases {
            XCTAssertEqual(loaded[grammar]?.count, 1, grammar.rawValue)
            XCTAssertFalse(loaded[grammar]?.contains(0) ?? true, grammar.rawValue)
        }
    }
}
