# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(Entity)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set to `on` to have each library be output as individual files.
# In this case, each output file will have a name associated with its source.
#
# Set to `off` to have each library be output as one monolithic file.
# In this case, the output file will take on the name of the parent directory.
set(DISCRETE_OUTPUT off)

set(ENTITY_DIR ${PROJECT_SOURCE_DIR})
set(CHARACTER_DIR "${PROJECT_SOURCE_DIR}/Character")
set(RACE_DIR "${PROJECT_SOURCE_DIR}/Race")

function(init_lib_entity target)
  target_sources(${target}
    PUBLIC
    "${ENTITY_DIR}/Entity.hpp"
    PRIVATE
    "${ENTITY_DIR}/Entity.cpp"
  )
endfunction()

function(init_lib_character target)
  target_sources(${target}
    PUBLIC
    "${CHARACTER_DIR}/Character.hpp"
    PRIVATE
    "${CHARACTER_DIR}/Character.cpp"
  )
endfunction()

function(init_lib_race target)
  target_sources(${target}
    PUBLIC
    "${RACE_DIR}/Race.hpp"
    PRIVATE
    "${RACE_DIR}/Race.cpp"
  )
endfunction()

if(DISCRETE_OUTPUT)
  add_library(Entity STATIC)
  init_lib_entity(Entity)

  add_library(Character STATIC)
  init_lib_character(Character)
  target_link_libraries(Character PUBLIC Entity)

  add_library(Race STATIC)
  init_lib_race(Race)
  target_link_libraries(Entity PUBLIC Race)
else()
  add_library(Entity STATIC)
  init_lib_entity(Entity)
  init_lib_character(Entity)
  init_lib_race(Entity)
endif()
