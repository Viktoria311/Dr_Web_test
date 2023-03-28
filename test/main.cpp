#include "foo.h"
#include <cstring>
#include <iostream>


int main()
{
    char str[]{ "testing  string   " };

    std::cout << std::strlen(str) << std::endl;
    TrimRight(str);
    std::cout << std::strlen(str) << std::endl;

    return 0;
}
