# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(Combat)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(COMBAT_DIR ${PROJECT_SOURCE_DIR})

function(init_lib_damagetypes target)
  target_include_directories(${target} INTERFACE "${COMBAT_DIR}")
endfunction()

add_library(Combat INTERFACE)
init_lib_damagetypes(Combat)
