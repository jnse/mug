cmake_minimum_required(VERSION 2.8.10)
project(mug)

# Enable C++17 support.

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_COMPILER "emcc")
set(CMAKE_CXX_COMPILER "emcc")
set (CMAKE_CXX_FLAGS "--std=gnu++17 -s USE_SDL=2 ${CMAKE_CXX_FLAGS}")

set(CMAKE_CXX_FLAGS_INIT "-s WASM=1")
set(CMAKE_EXE_LINKER_FLAGS_INIT "-s WASM=1")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-DNDEBUG -Oz")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE_INIT "-Oz --llvm-lto 1")
set(CMAKE_EXECUTABLE_SUFFIX ".js")
include_directories("${CMAKE_SOURCE_DIR}/include/") 

add_subdirectory(src)
add_subdirectory(tests)
#add_subdirectory(docs)

enable_testing()
add_test(DEMO tests/demo)

