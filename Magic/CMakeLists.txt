# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(Magic)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SPELL_DIR ${PROJECT_SOURCE_DIR})

function(init_lib_spell target)
  target_sources(${target}
    PUBLIC
    "${SPELL_DIR}/Spell.hpp"
    PRIVATE
    "${SPELL_DIR}/Spell.cpp"
  )
endfunction()

add_library(Magic STATIC)
init_lib_spell(Magic)
