add_library(MyClass STATIC MyClass.cpp)
target_include_directories(MyClass PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

