#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t a{0x0D};
    std::uint8_t b{0xFF};
    std::uint8_t c{0xA5};

    std::cout << static_cast<int>(a) << '\n';
    std::cout << static_cast<int>(b) << '\n';
    std::cout << static_cast<int>(c) << '\n';

    return 0;
}