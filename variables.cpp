#include <iostream>

int main() {
    // declares that x exists
    int x;
    // we set the variable x to 4
    x = 4;

    std::cout << "x is: " << x << std::endl;

    // double is a decimal type
    // word double comes from IEEE 754 floating point precsision standards
    // IEEE 754 standards: standards how to represent decimals in binary
    double y;
    y = 2.67;
    std::cout << "y is: " << y << std::endl;

    // char is short for character
    char chud = 'a';
    std::cout << "chud is: " << chud << std::endl;

    // bool is short for boolean
    bool flag = true;
    std::cout << "flag is: " << flag << std::endl; // what will this print out?
    flag = false;
    std::cout << "flag after setting it to false is: " << flag << std::endl; // what will this print out?
}