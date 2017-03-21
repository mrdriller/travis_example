#
# src/CMakeLists.txt
#

set(TCI_CORE_HEADER_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/dummy.h
)

set (TCI_CORE_SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/dummy.cpp
)

add_library(tci_core ${TCI_CORE_HEADER_FILES} ${TCI_CORE_SOURCE_FILES})

include_directories(
    ${PROJECT_SOURCE_DIR}
)

add_executable(tci_main ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(tci_main tci_core)
