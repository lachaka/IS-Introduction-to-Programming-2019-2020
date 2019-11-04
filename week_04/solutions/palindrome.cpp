#include <iostream>

using namespace std;

int main() {
    int number;
    int reversedNumber;

    cin >> number;
    int temp = number;

    while (temp != 0) {
        reversedNumber = reversedNumber * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Palindrome: " << boolalpha << (number == reversedNumber) << endl;

    return 0;
}
