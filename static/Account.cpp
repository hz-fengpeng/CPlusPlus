#include "Account.hpp"

// 静态成员变量需要再次定义
double Account::m_rate = 8.0;

// 静态成员函数不需要在声明为static
void Account::set_rate(const double x)
{
    m_rate = x;
}

