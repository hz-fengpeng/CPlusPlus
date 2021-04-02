#include "complex.hpp"
#include <iostream>

int main()
{
    complex a(2, 3);
    complex b(a);           // 编译器自动生成拷贝构造函数

    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;
    std::cout << "hello world!" << std::endl;
}