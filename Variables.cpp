#include <iostream>

int main(int argc, char **argv) {
    int firstNum = 17;
    int secondNum = {82}; // type protection

    int sum = firstNum + secondNum;

    std::cout << "The sum of numbers is: " << sum << std::endl;

    return 0;
}