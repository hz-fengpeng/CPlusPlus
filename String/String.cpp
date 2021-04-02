#include "String.hpp"
#include <string.h>

// 提供函数的默认参数只能声明一次，一般在头文件中声明，在定义中不用声明。
String::String(const char* cstr)
{
    if(cstr){
        m_data = new char[strlen(cstr)+1];
        strcpy(m_data, cstr);
    }else
    {
        m_data = new char[1];
        *m_data = '\0';
    }
}

String::~String()
{
    delete[] m_data;
}

// 拷贝构造函数  
String::String(const String& str)
{
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}

// 拷贝赋值函数
 String& String::operator=(const String& str)
 {
     // 检测自我赋值
     if(this == &str){
         return *this;
     }

     delete[] m_data;
     m_data = new char[strlen(str.m_data)+1];
     strcpy(m_data, str.m_data);
     return *this;
 }  

 std::ostream& operator<<(std::ostream& os, const String& str)
 {
     os << str.get_c_str();
     return os;
 }