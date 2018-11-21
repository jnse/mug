link_directories("${CMAKE_BINARY_DIR}")

add_executable(demo demo/main.cpp)
target_link_libraries(demo mug)
configure_file(demo/demo.html demo.html COPYONLY)
