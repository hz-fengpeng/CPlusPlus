#include "String.hpp"
#include <iostream>

int main()
{
    String s1 = "hello world";
    String s2 = s1;     // 这里调用的是拷贝构造函数，而不是拷贝赋值函数。
    std::cout << s1 << std::endl;

}