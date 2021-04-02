#include "Account.hpp"
#include <iostream>

int main()
{
    std::cout << Account::m_rate << std::endl;
    Account::set_rate(5.0);
    std::cout << Account::m_rate << std::endl;
}