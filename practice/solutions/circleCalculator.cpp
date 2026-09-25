#include <iostream>

int main() {
    // Text header to make the program a little nicer for the user
    std::cout << "=== Circle Calculator ===" << std::endl;

    // Main functionality
    std::cout << "Radius? ";
    const double PI = 3.14159;

    double radius;
    std::cin >> radius;
    
    // Do not try to use ^ for exponents
    double area = PI * radius * radius;
    std::cout << "Area of Circle: " << area << std::endl;

    // Alternative:
    std::cout << "Area of Circle: " << PI * radius * radius << std::endl;
}