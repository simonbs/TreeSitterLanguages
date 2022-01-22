import Runestone

public extension TreeSitterIndentationScopes {
    static var rust: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(
            indent: [
                "mod_item",
                "struct_item",
                "enum_item",
                "impl_item",
                "for_expression",
                "struct_expression",
                "match_expression",
                "tuple_expression",
                "match_arm",
                "match_block",
                "if_let_expression",
                "call_expression",
                "assignment_expression",
                "arguments",
                "block",
                "where_clause",
                "use_list"
            ],
            outdent: ["}"])
    }
}
