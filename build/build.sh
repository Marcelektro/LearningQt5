#!/bin/bash

set -e # exit on errors

# Build the project using cmake
SCRIPT_ABSOLUTE_PATH=$(readlink -f "$0")
PROJECT_ROOT=$(dirname "$SCRIPT_ABSOLUTE_PATH")/../

echo "Project root: $PROJECT_ROOT"

cd "$PROJECT_ROOT"


mkdir -p ./dist

cmake -S . -B ./dist/
cmake --build ./dist/
