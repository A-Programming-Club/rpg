# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(Utility)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set to `on` to have each library be output as individual files.
# In this case, each output file will have a name associated with its source.
#
# Set to `off` to have each library be output as one file.
# In this case, the output file will take on the name of the parent directory.
set(DISCRETE_OUTPUT off)

set(CARTESIAN_DIR "${PROJECT_SOURCE_DIR}/Cartesian")
set(EUCLIDEAN_DIR "${PROJECT_SOURCE_DIR}/Euclidean")

function(init_lib_cartesian target)
  target_sources(${target}
    PUBLIC
    "${CARTESIAN_DIR}/Cartesian.hpp"
    PRIVATE
    "${CARTESIAN_DIR}/Cartesian.cpp"
  )
endfunction()

function(init_lib_euclidean target)
  target_sources(${target}
    PUBLIC
    "${EUCLIDEAN_DIR}/Euclidean.hpp"
    PRIVATE
    "${EUCLIDEAN_DIR}/Euclidean.cpp"
  )
endfunction()

if(DISCRETE_OUTPUT)
  add_library(Cartesian STATIC)
  init_lib_cartesian(Cartesian)

  add_library(Euclidean STATIC)
  init_lib_euclidean(Euclidean)
else()
  add_library(Utility STATIC)
  init_lib_cartesian(Utility)
  init_lib_euclidean(Utility)
endif()
