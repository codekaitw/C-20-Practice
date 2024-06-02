#include <iostream>
#include <iomanip>

int main() {
    float num1 = {1.12345678901234567890f};
    double num2 = {1.12345678901234567890};
    long double num3 = {1.12345678901234567890L};

    // print out size
    std::cout << "float size: " << sizeof(float) << std::endl;
    std::cout << "double size: " << sizeof(double) << std::endl;
    std::cout << "long double size: " << sizeof(long double) << std::endl;

    // print out values
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;

    // std::cout only can print out 7 precision
    // using std::setprecision to set the precision
    std::cout << std::setprecision(20);
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;

    int num4 = {5};
    int num5 = {10};

    std::cout << std::boolalpha;

    std::cout << "num5 < num5: " << (num4 < num5) << std::endl;

    bool result = num4 < num5;

    std::cout << "result: " << result << std::endl;

    return 0;
}