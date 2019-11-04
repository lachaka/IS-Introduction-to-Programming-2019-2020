#include <iostream>

using namespace std;

int main() {
    int number;

    cin >> number;
    int divisors = 0;

    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            ++divisors;
        }
    }
    bool isPrime = divisors == 0 && number >= 2;
    cout << "Is prime: " << boolalpha << isPrime << endl;

    return 0;
}
