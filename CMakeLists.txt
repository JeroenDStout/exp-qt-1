#
# Initial set-up
#

cmake_minimum_required(VERSION 3.15)

project(demo_window)
include(cmake/project.cmake)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Languages
include(cmake/cxx.cmake)
include(cmake/python.cmake)

# Support
include(cmake/get_cpm.cmake)
include(cmake/artefacts.cmake)
include(cmake/sources.cmake)
include(cmake/qt.cmake)

#
# Base config
#

 # intentionally left blank

#
# Paths
#

 # intentionally left blank

#
# Subprojects
#

add_subdirectory(src/demo_window)
add_subdirectory(src/version)

message(STATUS "")