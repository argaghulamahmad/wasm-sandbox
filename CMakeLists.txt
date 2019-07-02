cmake_minimum_required(VERSION 3.14)
project(wasmsandbox)

set(CMAKE_CXX_STANDARD 14)

add_executable(wasmsandbox main.cpp learn/marcoselvatici/first-app/c/hello.c learn/marcoselvatici/first-app/cpp/hello.cpp learn/marcoselvatici/func/cpp/fib.cpp learn/marcoselvatici/export-func/fib.c learn/marcoselvatici/call-js-on-c/c/demo.c learn/marcoselvatici/libraries/main.c learn/mozilla/compile-c-module/libwebp/webp.c learn/mozilla/compile-c-module/webp.c)