cmake_minimum_required(VERSION 3.15)

project("using_modules")

find_package(Boost
     COMPONENTS
          filesystem
     REQUIRED
)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")

add_subdirectory("src")
