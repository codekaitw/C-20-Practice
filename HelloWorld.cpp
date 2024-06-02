#include <iostream>

consteval int get_value() {
	return 3;
}

int main() {
	std::cout << "Hello, World" << std::endl;
	std::cout << "Hello next line";
	return 0;
}