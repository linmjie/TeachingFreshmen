#include <iostream>

using namespace std;

long long factorial(int num) {
    long long ret = 1;
    for (int i = 1; i <= num; i++) {
        ret *= i;
    }
    return ret;
}

bool inRange(int num) {
    return num >= 2 && num <= 19;
}

int main() {
    while (true) {
        int num;
        cout << "Enter number: ";
        std::cin >> num;
        if (inRange(num)) {
            cout << "Permutations of " << num << " cards : " << factorial(num) << endl;
            cout << "Permutations of " << num << " - 1 cards: " << factorial(num - 1) << endl;
            cout << "Permutations of " << num << " + 1 cards: " << factorial(num + 1) << endl;
        } else {
            cout << "Enter a number between 2 and 19" << endl;
        }
    }

    return 0;
}
