#
# CMakeLists.txt
#

cmake_minimum_required(VERSION 2.8)

project(TravisExample)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(ZLIB REQUIRED)
find_package(HDF5 REQUIRED)
find_package(Qt4 REQUIRED QtCore QtTest)

add_subdirectory(src)
add_subdirectory(test)
