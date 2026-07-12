#include <cstdint>
#include <iostream>

int main()
{
    std::cout << "char      : " << sizeof(char) << '\n';
    std::cout << "short     : " << sizeof(short) << '\n';
    std::cout << "int       : " << sizeof(int) << '\n';
    std::cout << "long      : " << sizeof(long) << '\n';
    std::cout << "long long : " << sizeof(long long) << '\n';

    std::cout << '\n';

    std::cout << "int8_t    : " << sizeof(int8_t) << '\n';
    std::cout << "uint8_t   : " << sizeof(uint8_t) << '\n';
    std::cout << "int16_t   : " << sizeof(int16_t) << '\n';
    std::cout << "uint16_t  : " << sizeof(uint16_t) << '\n';
    std::cout << "int32_t   : " << sizeof(int32_t) << '\n';
    std::cout << "uint32_t  : " << sizeof(uint32_t) << '\n';
    std::cout << "int64_t   : " << sizeof(int64_t) << '\n';
    std::cout << "uint64_t  : " << sizeof(uint64_t) << '\n';

    return 0;
}