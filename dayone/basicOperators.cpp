#include <iostream>

int main() {
    // basic arithmetic operators: +, -, *, /
    // these expressions output a number (int or double)
    // there is no ^ for power
    int x = 3 + 3;
    std::cout << x << std::endl;

    // modulus (%) gives your the remainder after division
    int y = 7 % 3;
    std::cout << "y is: " << y << std::endl;

    // >, >=. <, <=
    // these expressions output a boolean
    bool thing = 4 > 3;
    std::cout << "4 > 3?: " << thing << std::endl;
}