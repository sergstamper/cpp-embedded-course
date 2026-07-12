#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t status{0b00101010};

    std::cout << "Status: " << std::bitset<8>(status) << '\n';

    for (int bit{0}; bit < 8; ++bit)
    {
        if (status & (1 << bit))
        {
            std::cout << "Bit " << bit << " : SET\n";
        }
        else
        {
            std::cout << "Bit " << bit << " : CLEAR\n";
        }
    }

    return 0;
}