#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t value{1};

    for (int i{0}; i < 10; ++i)
    {
        std::cout
            << "Shift " << i << ": "
            << std::bitset<8>(value)
            << " = "
            << static_cast<int>(value)
            << '\n';

        value <<= 1;
    }

    return 0;
}