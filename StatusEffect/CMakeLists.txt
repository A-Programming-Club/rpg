# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(StatusEffect)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(STATUSEFFECT_DIR ${PROJECT_SOURCE_DIR})

function(init_lib_statuseffect target)
  target_sources(${target}
    PUBLIC
    "${STATUSEFFECT_DIR}/StatusEffect.hpp"
    PRIVATE
    "${STATUSEFFECT_DIR}/StatusEffect.cpp"
  )
endfunction()

add_library(StatusEffect STATIC)
init_lib_statuseffect(StatusEffect)
