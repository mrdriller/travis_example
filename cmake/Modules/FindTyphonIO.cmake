#.rst:
# FindTyphonIO
# ------------
#
# Find Module for TyphonIO
#
# Finds the TyphonIO headers and libraries 
#
# This module defines the following variables
#
# * TYPHONIO_FOUND         - if TyphonIO if found
# * TyphonIO_INCLUDE_DIRS  - The TyphonIO include directories
# * TyphonIO_LIBRARIES     - The TyphonIO libraries
#
# In order to find TyphonIO, set TyphonIO_ROOT to a TyphonIO install directory
# containing the include and lib subdirectories

find_path(TyphonIO_INCLUDE_DIR
        NAMES typhonio.h
        PATHS ${TyphonIO_ROOT}
        PATH_SUFFIXES include
)

find_library(TyphonIO_C_LIBRARY
        NAMES typhonio
        PATHS ${TyphonIO_ROOT}
        PATH_SUFFIXES lib
)

find_package_handle_standard_args(TyphonIO DEFAULT_MSG TyphonIO_INCLUDE_DIR
        TyphonIO_C_LIBRARY)

set(TyphonIO_INCLUDE_DIRS ${TyphonIO_INCLUDE_DIR})
set(TyphonIO_LIBRARIES ${TyphonIO_C_LIBRARY})
