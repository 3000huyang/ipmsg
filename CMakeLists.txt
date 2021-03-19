

cmake_minimum_required(VERSION 3.0)

project(IPMsg C CXX)


# Default build is in RelWithDebInfo mode
if(CMAKE_BUILD_TYPE)
    message(STATUS "Build type specified as ${CMAKE_BUILD_TYPE}")
else()
    message(STATUS "Build type not specified, using Release")
    set(CMAKE_BUILD_TYPE Release)
    set(IS_DEBUG FALSE)
endif()

if(${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    set(IS_DEBUG TRUE)
endif()

if (UNIX)
    set(CMAKE_C_FLAGS_RELEASE "-O3")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
endif ()

# set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-fsanitize=address -O1 -fno-omit-frame-pointer -g ")

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}")
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}")


# find_package(pthread REQUIRED)
add_subdirectory(src)