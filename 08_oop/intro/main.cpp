#include "String.h"
#include <iostream>

int main()
{
    String str1 = "hello";
    String str2 = str1 + " world";
    std::cout << str2 << '\n' << str2.get_length();
    return 0;
}
