#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number1, number2;
    bool result = false;

    cin >> number1 >> number2;

    for (int i = 2; i <= number1; ++i) {
        if (number1 % i == 0 && (number2 % (i * i)) == 0) {
            result = true;
            break;
        }
    }

    cout << (result ? "Yes" : "No") << endl;

    return 0;
}
