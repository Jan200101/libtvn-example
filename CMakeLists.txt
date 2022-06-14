cmake_minimum_required(VERSION 3.12)

if(CMAKE_POLICY_DEFAULT_CMP0017 OR CMAKE_POLICY_DEFAULT_CMP0020)
    # touch these to remove warnings
endif()

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif()

project(example VERSION 0.0.0 LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_subdirectory(deps/OFQT)
add_subdirectory(src)
