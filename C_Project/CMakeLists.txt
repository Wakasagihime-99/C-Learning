cmake_minimum_required(VERSION 3.0.0)
project(Project VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(. DIR_SRC)
add_executable(Demo ${DIR_SRC})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
