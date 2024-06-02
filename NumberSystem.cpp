#include <iostream>

int main() {
    int num1 = 15; // Decimal
    int num2 = 017; // Octal
    int num3 = 0x0F; // Hexadecimal
    int num4 = 0b00001111; // Binary

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;
    std::cout << "num4: " << num4 << std::endl;

    long long1 = {888};
    signed long2 = {888};
    unsigned long3 = {888};
    long long long_long = {888};

    std::cout << "long1 size: " << sizeof(long1) << std::endl; 
    std::cout << "long2 size: " << sizeof(long2) << std::endl;
    std::cout << "long3 size: " << sizeof(long3) << std::endl;
    std::cout << "long_long size: " << sizeof(long_long) << std::endl;

    return 0;
}