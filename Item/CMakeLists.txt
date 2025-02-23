# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.20)

include_guard(GLOBAL)

project(items)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set to `on` to have each library be output as individual files.
# In this case, each output file will have a name associated with its source.
#
# Set to `off` to have each library be output as one file.
# In this case, the output file will take on the name of the parent directory.
set(DISCRETE_OUTPUT off)

set(ITEM_DIR ${PROJECT_SOURCE_DIR})
set(CONSUMABLE_DIR "${PROJECT_SOURCE_DIR}/Consumable")
set(EQUIPMENT_DIR "${PROJECT_SOURCE_DIR}/Equipment")

function(init_lib_item target)
  target_sources(${target}
    PUBLIC
    "${ITEM_DIR}/item.hpp"
    PRIVATE
    "${ITEM_DIR}/item.cpp"
  )
endfunction()

function(init_lib_consumable target)
  target_sources(${target}
    PUBLIC
    "${CONSUMABLE_DIR}/consumable.hpp"
    PRIVATE
    "${CONSUMABLE_DIR}/consumable.cpp"
  )
endfunction()

function(init_lib_equipment target)
  set(GARB_DIR "${EQUIPMENT_DIR}/Garb")
  set(WEAPON_DIR "${EQUIPMENT_DIR}/Weapon")
  target_sources(${target}
    PUBLIC
    "${GARB_DIR}/garb.hpp"
    "${WEAPON_DIR}/weapon.hpp"
    PRIVATE
    "${GARB_DIR}/garb.cpp"
    "${WEAPON_DIR}/weapon.cpp"
  )
endfunction()

if(DISCRETE_OUTPUT)
  add_library(item STATIC)
  init_lib_item(item)

  add_library(consumable STATIC)
  init_lib_consumable(consumable)
  target_link_libraries(consumable PUBLIC item)

  add_library(equipment STATIC)
  init_lib_equipment(equipment)
  target_link_libraries(equipment PUBLIC item)
else()
  add_library(item STATIC)
  init_lib_item(item)
  init_lib_consumable(item)
  init_lib_equipment(item)
endif()
