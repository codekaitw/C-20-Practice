#include <iostream>

int main() 
{
    std::cout << "Enter x value: ";
    int x{};
    std::cin >> x;
    std::cout << "x is : " << x << '\n';
    // a) test: x = A letter => result: x is: 0
    // b) test: x = A number with fraction part(2.3, 4.7) => result: x is: 2, 4
    // c) test: x = Negative number(-3) => result: x is: -3
    // d) test: x = Word => result: x is: 0
    // e) test: x = big number => result : x is: 2147483647
    // f) test: x = number with some word(123abc) => result : x is: 123
    // 0) test zero: x = integer(0~3) => result: x is: 0 or x is: 3
    return 0;
}
