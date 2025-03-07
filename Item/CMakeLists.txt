# This version is subject to change as we figure out what standards we will use.
cmake_minimum_required(VERSION 3.16)

include_guard(GLOBAL)

project(Items)

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
    "${ITEM_DIR}/Item.hpp"
    PRIVATE
    "${ITEM_DIR}/Item.cpp"
  )
endfunction()

function(init_lib_consumable target)
  target_sources(${target}
    PUBLIC
    "${CONSUMABLE_DIR}/Consumable.hpp"
    PRIVATE
    "${CONSUMABLE_DIR}/Consumable.cpp"
  )
endfunction()

function(init_lib_garb target)
  set(GARB_DIR "${EQUIPMENT_DIR}/Garb")
  target_sources(${target}
    PUBLIC
    "${GARB_DIR}/Garb.hpp"
    PRIVATE
    "${GARB_DIR}/Garb.cpp"
  )
endfunction()

function(init_lib_weapon target)
  set(WEAPON_DIR "${EQUIPMENT_DIR}/Weapon")
  target_sources(${target}
    PUBLIC
    "${WEAPON_DIR}/Weapon.hpp"
    PRIVATE
    "${WEAPON_DIR}/Weapon.cpp"
  )
endfunction()

if(DISCRETE_OUTPUT)
  add_library(Item STATIC)
  init_lib_item(item)

  add_library(Consumable STATIC)
  init_lib_consumable(Consumable)
  target_link_libraries(Consumable PUBLIC Item)

  add_library(Garb STATIC)
  init_lib_garb(Garb)
  target_link_libraries(Garb PUBLIC Item)

  add_library(Weapon STATIC)
  init_lib_weapon(Weapon)
  target_link_libraries(Weapon PUBLIC Item)
else()
  add_library(Item STATIC)
  init_lib_item(Item)
  init_lib_consumable(Item)
  init_lib_garb(Item)
  init_lib_weapon(Item)
endif()
