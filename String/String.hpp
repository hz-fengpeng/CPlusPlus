#ifndef __STRING__
#define __STRING__

#include <iostream>

class String
{
public:
    // 构造函数
    String(const char* cstr=0);

    // 类中有指针的成员变量必须有 拷贝构造和拷贝赋值函数
    String(const String& str);      // 拷贝构造函数
    String& operator=(const String& str);   // 拷贝赋值函数

    // 析构函数
    ~String();

    char* get_c_str() const
    {
        return m_data;
    }

private:
    char* m_data;
};

std::ostream& operator<<(std::ostream& os, const String& str);

#endif