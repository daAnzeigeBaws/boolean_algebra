cmake_minimum_required(VERSION 3.6)
project(boolean_algebra_new)

set(CMAKE_CXX_STANDARD 11)

include_directories ("${PROJECT_SOURCE_DIR}/include")
file(GLOB SOURCES "src/*.cpp")
add_subdirectory (src)

# make sure all include files show up in the project
FILE(GLOB_RECURSE INC_ALL "include/*.h")
include_directories("include")

add_executable(boolean_algebra_new  ${SOURCES} ${INC_ALL})