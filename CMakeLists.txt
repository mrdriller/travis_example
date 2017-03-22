#
# CMakeLists.txt
#

cmake_minimum_required(VERSION 2.8)

project(TravisExample)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_MODULE_PATH
       "${PROJECT_SOURCE_DIR}/cmake/Modules" "${CMAKE_MODULE_PATH}")

find_package(ZLIB REQUIRED)
find_package(HDF5 REQUIRED)
find_package(TyphonIO REQUIRED)
find_package(Qt4 REQUIRED QtCore QtTest)
include(${QT_USE_FILE})

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
