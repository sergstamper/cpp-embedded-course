#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t a{13};
    std::uint8_t b{0b00001101};

    std::cout << "a = " << static_cast<int>(a) << '\n';
    std::cout << "b = " << static_cast<int>(b) << '\n';

    if (a == b)
    {
        std::cout << "Values are equal!\n";
    }

    return 0;
}