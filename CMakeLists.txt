# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(rpg)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(Ability)
add_subdirectory(Combat)
add_subdirectory(Entity)
add_subdirectory(Item)
add_subdirectory(Magic)
add_subdirectory(StatusEffect)
add_subdirectory(Systems)
add_subdirectory(Utility)
