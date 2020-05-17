#include <iostream>
#include <string.h>

void test()
{
    std::cout << "test" << std::endl;
}

void printStart(char *args)
{
    std::cout << "Start ";
    for (size_t i = 2; i < strlen(args); i++)
        std::cout << args[i];
    std::cout << " program" << std::endl;
}
