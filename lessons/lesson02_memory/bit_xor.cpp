#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t value{0};

    std::cout << "Initial : " << std::bitset<8>(value) << '\n';

    value ^= (1 << 3);
    std::cout << "Toggle 3: " << std::bitset<8>(value) << '\n';

    value ^= (1 << 3);
    std::cout << "Toggle 3: " << std::bitset<8>(value) << '\n';

    value ^= (1 << 1);
    std::cout << "Toggle 1: " << std::bitset<8>(value) << '\n';

    value ^= (1 << 7);
    std::cout << "Toggle 7: " << std::bitset<8>(value) << '\n';

    return 0;
}