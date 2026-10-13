#include <iostream>

using namespace std;

int main() {
    while (true) {
        int num;
        cout << "Input a number: ";
        cin >> num;

        if (num > 0) {
            cout << "Number is non-zero positive" << endl;
        } else if (num == 0) {
            cout << "Number is zero" << endl;
        } else {
            cout << "Number is negative" << endl;
        }

        // WRONG
        if (num > 0) {
            cout << "WRONG BEHAVIOR Number is non-zero positive" << endl;
        } else if (num = 0) { // sets num to zero, since zero is false, it fails the condition
            cout << "WRONG BEHAVIOR Number is zero" << endl;
        } else {
            cout << "WRONG BEHAVIOR Number is negative" << endl;
        }
    }
}