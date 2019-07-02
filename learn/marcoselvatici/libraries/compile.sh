#!/usr/bin/env bash
emcc main.c tinyexpr.c -o main.html -s WASM=1