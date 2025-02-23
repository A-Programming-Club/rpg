# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.20)

include_guard(GLOBAL)

project(World)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set to `on` to have each library be output as individual files.
# In this case, each output file will have a name associated with its source.
#
# Set to `off` to have each library be output as one file.
# In this case, the output file will take on the name of the parent directory.
set(DISCRETE_OUTPUT off)

set(WORLD_DIR "${PROJECT_SOURCE_DIR}/World")
set(REGION_DIR "${WORLD_DIR}/Region")

function(init_lib_world target)
  target_sources(${target}
    PUBLIC
    "${WORLD_DIR}/world.hpp"
    PRIVATE
    "${WORLD_DIR}/world.cpp"
  )
endfunction()

function(init_lib_region target)
  target_sources(${target}
    PUBLIC
    "${REGION_DIR}/region.hpp"
    PRIVATE
    "${REGION_DIR}/region.cpp"
  )
endfunction()

if(DISCRETE_OUTPUT)
  add_library(world STATIC)
  init_lib_world(world)

  add_library(region STATIC)
  init_lib_region(region)
  target_link_libraries(region PUBLIC world)
else()
  add_library(world STATIC)
  init_lib_world(world)
  init_lib_region(world)
endif()
