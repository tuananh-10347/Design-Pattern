#include <iostream>
#include <limits>

int main()
{
    std::cout << "Size of bool: " << sizeof(bool) << '\n';
    std::cout << "Size of char: " << sizeof(char) << '\n';
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << '\n';
    std::cout << "Size of short: " << sizeof(short) << '\n';
    std::cout << "Size of int: " << sizeof(int) << '\n';
    std::cout << "Size of long: " << sizeof(long) << '\n';
    std::cout << "Size of long long: " << sizeof(long long) << '\n';
    std::cout << "Size of float: " << sizeof(float) << '\n';
    std::cout << "Size of double: " << sizeof(double) << '\n';
    std::cout << "Size of long double: " << sizeof(long double) << '\n';
    std::cout << "Size of size_t: " << sizeof(size_t) << '\n';
    return 0;
}
