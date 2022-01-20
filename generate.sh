#!/bin/bash
# Check if tree-sitter is installed
if ! [ -x "$(command -v tree-sitter)" ]; then
  echo "tree-sitter is not installed or unavailable. Install tree-sitter by running:" >&2
  echo "" >&2
  echo "  brew install tree-sitter" >&2
  exit 1
fi
# Check if npm is installed
if ! [ -x "$(command -v tree-sitter)" ]; then
  echo "npm is not installed or unavailable." >&2
  exit 1
fi
# Get path for script's parent directory
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
# Generate Swift parser
cd $SCRIPT_DIR/tree-sitter-swift
npm install
tree-sitter generate
cp $SCRIPT_DIR/tree-sitter-swift/src/parser.c ../Sources/TreeSitterSwift/src
cp $SCRIPT_DIR/tree-sitter-swift/src/scanner.c ../Sources/TreeSitterSwift/src
cp -r $SCRIPT_DIR/tree-sitter-swift/src/tree_sitter ../Sources/TreeSitterSwift/src
