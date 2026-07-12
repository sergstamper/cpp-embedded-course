#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t value{0b00110110};

    std::cout << "Original : "
              << std::bitset<8>(value)
              << '\n';

    auto inverted = static_cast<std::uint8_t>(~value);

    std::cout << "Inverted : "
              << std::bitset<8>(inverted)
              << '\n';

    return 0;
}