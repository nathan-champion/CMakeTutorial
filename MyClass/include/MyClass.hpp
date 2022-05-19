#ifndef MYCLASS_HPP_
#define MYCLASS_HPP_

namespace HelloWorld
{
    class MyClass
    {
        private:
        public:
            MyClass();
            ~MyClass();
            MyClass(const MyClass& ref);
            void DoIt();

    };
}

#endif