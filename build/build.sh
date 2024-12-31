#!/bin/bash

# Build the project using cmake
cd ../

mkdir -p dist

cmake -S . -B ./dist/
cmake --build ./dist/
