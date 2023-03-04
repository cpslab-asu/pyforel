add_subdirectory(antlr4/runtime/Cpp)

# Setup tooling for ANTLR4
list(APPEND CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/antlr4/runtime/Cpp/cmake
)

set(CMAKE_MODULE_PATH
  ${CMAKE_MODULE_PATH}
  CACHE
  INTERNAL
  "ANTLR module path."
)
