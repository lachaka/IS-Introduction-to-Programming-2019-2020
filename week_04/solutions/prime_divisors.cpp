#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    int temp = number;
    for (int i = 2; i < number; ++i) {
        if (temp % i == 0) {
            cout << i << " ";
        }
        while (temp % i == 0) {
            temp /= i;
        }

    }
    cout << endl;

    return 0;
}
