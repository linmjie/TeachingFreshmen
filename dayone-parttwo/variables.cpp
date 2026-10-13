#include <iostream>

using namespace std;

int main() {
    // declaration - declares to the computer we need space for this variable in memory
    // needs datatype name
    bool hideThing;
    // initialization - sets the value of the variable
    // name and the value
    hideThing = true;

    // declaration + initialization
    bool showScreen = false;
    cout << hideThing << endl;

    int number = 12;
    cout << number << endl;

    // doubles can have decimal points
    double decimalThing = 5.2342 + 0.3;
    cout << decimalThing << endl;

    char character = 'f';
    cout << character << endl;

    // declaration and initialization
    string rope = "quote";
    cout << rope << endl;
}