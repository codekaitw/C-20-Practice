#include <iostream>
#include <string>

int main()
{
    int age;
    std::string name;
    std::string full_name;

    /*
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    */

    std::cout << "Enter your full name: " << std::endl;
    // std::cin >> name >> age;
    std::getline(std::cin, full_name);
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    std::cout << "Name is " << full_name << " and age is " << age << std::endl;

    std::cerr << "Error message" << std::endl;
    std::clog << "Log message" << std::endl;

    return 0;
}