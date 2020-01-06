#include <iostream>

using namespace std;

int countDigit(int number, int digit) {
    if (number == 0) {
        return 0;
    }

    if (number % 10 == digit) {
        return 1 + countDigit(number / 10, digit);
    }

    return countDigit(number / 10, digit);
}

int main() {
    int number, digit;

    cin >> number;
    cin >> digit;

    cout << countDigit(number, digit) << endl;
    
    return 0;
}
