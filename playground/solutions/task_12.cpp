#include <iostream>

using namespace std;

bool smallerDigits(int number) {
    if (number < 10) {
        return true;
    }
    if (number % 10 > (number / 10) % 10) {
        return false;
    }

    return smallerDigits(number / 10);
}

int main() {
    int number;

    cin >> number;

    cout << boolalpha << smallerDigits(number) << endl;

    return 0;
}
