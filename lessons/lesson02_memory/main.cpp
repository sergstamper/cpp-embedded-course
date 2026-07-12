#include <iostream>

int main()
{
    char c = 'A';
    int number = 42;
    double pi = 3.14159;

    std::cout << "char:   " << sizeof(c) << " bytes\n";
    std::cout << "int:    " << sizeof(number) << " bytes\n";
    std::cout << "double: " << sizeof(pi) << " bytes\n";

    return 0;
}