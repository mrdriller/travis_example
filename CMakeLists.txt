#
# CMakeLists.txt
#

cmake_minimum_required(VERSION 2.8)

project(TravisExample)

find_package(ZLIB REQUIRED)
find_package(HDF5 REQUIRED)
find_package(Qt4 REQUIRED QtGui)

add_executable(tci_exmpl main.cpp)
