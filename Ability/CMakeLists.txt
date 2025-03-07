# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(Ability)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(ABILITY_DIR ${PROJECT_SOURCE_DIR})

function(init_lib_ability target)
  target_sources(${target}
    PUBLIC
    "${ABILITY_DIR}/Ability.hpp"
    PRIVATE
    "${ABILITY_DIR}/Ability.cpp"
  )
endfunction()

add_library(Ability STATIC)
init_lib_ability(Ability)
