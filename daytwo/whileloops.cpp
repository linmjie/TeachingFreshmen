#include <iostream>

using namespace std;

int main() {
    // while (true) {
    //     cout << "doing" << endl;
    // }

    int iteration = 0;
    while (iteration < 10) {
        cout << "loop number with a while loop: " << iteration + 1 << endl;
        // iteration = i + 1;
        // iteration += 1;
        iteration++; // only works for plus/minus 1
    }

    // for (initial-condition; conditional; post-statement) { body }

    for (int i = 0; i < 10; i++) {
        cout << "loop number with a for loop: " << i + 1 << endl;
    }
}