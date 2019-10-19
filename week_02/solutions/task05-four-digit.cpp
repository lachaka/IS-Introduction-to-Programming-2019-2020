#include <iostream>

using namespace std;

int main() {
    int number = 0;

    cin >> number;

    if (number % 100 == number / 100) {
        cout << "Yes" << endl;
    } else {
        cout << "False" << endl;
    }

    // solution using ternary operator
    // cout << (number % 100 == number / 100 ? "Yes" : "No") << endl;

    return 0;
}
