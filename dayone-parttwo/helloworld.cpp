// printing is not built into the c++ language
// you must include printing from the standard library
#include <iostream>

int main() {
    int number = 40;

    // cout as your console
    // << - insertion operator
    // inserting text into your console
    // printing does not automatically make new lines for you - you have to do it yourself
    std::cout << "Hello World " << number << std::endl;

    number = 89;
    std::cout << number << std::endl; 
}