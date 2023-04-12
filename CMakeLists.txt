cmake_minimum_required(VERSION 3.20)

project(pyforel
  VERSION 0.0.1
  DESCRIPTION "A Domain-Specific Language for the elicitation of Temporal Logic requirements."
  HOMEPAGE_URL "https://github.com/andersonjwan/pyforel"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Disable vendor-specific plugin by default.
#
# This is disabled to protect unwarranted linking of other extensions. If needed,
# please enable on a per-target basis.
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
  PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src/>
  PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src/>
)

target_link_libraries(${PROJECT_NAME} antlr4_static)

add_subdirectory(src)
add_subdirectory(external)
add_subdirectory(extras EXCLUDE_FROM_ALL)
