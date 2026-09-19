#include <iostream>

// strings are not a primitive type; you need to import them from the standard library
// primitive types are all of your most basic types:
// most commonly: int, double, char, and bool
#include <string> 

int main() {
    std::string word = "Hello World";
    std::cout << word << std::endl;

    // this part may be ahead; don't worry if it doesn't make too much sense right now
    // recall that a string is just a string of characters
    // you can access each character one by one if you wish
    // word[2] gets the third character in word (start counting at zero)
    char wordPart = word.at(2);
    std::cout << wordPart << std::endl;

    // the number 0 here is the index
    // we say we take the 0th index to get the first character from word
    char wordPart2 = word.at(0);
    std::cout << wordPart2 << std::endl;
}