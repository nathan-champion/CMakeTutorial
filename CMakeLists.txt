cmake_minimum_required(VERSION 3.0.0)
project(HelloWorld VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(MyClass)

add_executable(HelloWorld main.cpp)
target_link_libraries(HelloWorld PUBLIC MyClass)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
