#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t value{255};

    std::cout << static_cast<int>(value) << '\n';

    value++;

    std::cout << static_cast<int>(value) << '\n';
}