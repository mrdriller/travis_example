#
# test/CMakeLists.txt
#

set (TEST_HEADER_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/testdummy.h
    ${CMAKE_CURRENT_SOURCE_DIR}/testanother.h
)

set(TEST_SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/testdummy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/testanother.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/test_runner.cpp
)

include_directories(
    ${PROJECT_SOURCE_DIR}
)

add_executable(test_runner ${TEST_HEADER_FILES} ${TEST_SOURCE_FILES})
target_link_libraries(test_runner
    tci_core
    Qt4::QtCore
    Qt4::QtTest
)

add_test(allunittests test_runner)