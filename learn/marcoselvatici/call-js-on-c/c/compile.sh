#!/usr/bin/env bash
emcc demo.c -o demo.html -s WASM=1 -s EXIT_RUNTIME=1