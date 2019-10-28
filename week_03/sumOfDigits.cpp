#include <iostream>

using  namespace std;

int main() {
    int number, digit;
    int sumOfDigits = 0;

    cin >> number;

    while (number > 0) {
        digit = number % 10;
        sumOfDigits += digit;
        number /= 10;
    }

    cout << "Sum of all digits: " << sumOfDigits << endl;

    return 0;
}
