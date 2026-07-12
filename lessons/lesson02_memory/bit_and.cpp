#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t value{0b11111111};

    std::cout << "Initial : " << std::bitset<8>(value) << '\n';

    value &= ~(1 << 2);
    std::cout << "Clear 2 : " << std::bitset<8>(value) << '\n';

    value &= ~(1 << 5);
    std::cout << "Clear 5 : " << std::bitset<8>(value) << '\n';

    value &= ~(1 << 7);
    std::cout << "Clear 7 : " << std::bitset<8>(value) << '\n';

    return 0;
}