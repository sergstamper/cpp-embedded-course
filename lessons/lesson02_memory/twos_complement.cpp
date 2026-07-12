#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::int8_t value{-5};

    std::cout
        << "Value : "
        << static_cast<int>(value)
        << '\n';

    std::cout
        << "Bits  : "
        << std::bitset<8>(
               static_cast<std::uint8_t>(value))
        << '\n';

    return 0;
}