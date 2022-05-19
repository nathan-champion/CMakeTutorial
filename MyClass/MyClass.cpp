#include "include/MyClass.hpp"
#include <iostream>

namespace HelloWorld
{
    MyClass::MyClass()
    {
    }
    MyClass::~MyClass()
    {
    }
    MyClass::MyClass(const MyClass &ref)
    {
    }
    void MyClass::DoIt()
    {
        std::cout << "Hello, world!  I'm in a class!  Now in a library!  Now with its own CMakeLists.txt!" << std::endl;
    }
}