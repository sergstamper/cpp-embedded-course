#include <cstddef>
#include <iostream>

struct Data
{
    int a;
    char b;
};

int main()
{
    std::cout
        << "sizeof(Data) = "
        << sizeof(Data)
        << '\n';

    std::cout
        << "offsetof(a) = "
        << offsetof(Data, a)
        << '\n';

    std::cout
        << "offsetof(b) = "
        << offsetof(Data, b)
        << '\n';

    return 0;
}