#include <iostream>

using  namespace std;

int main() {
    int digit;
    cin >> digit;

    for (int i = 1; i <= 10; ++i) {
        cout << digit << " * " << i << " = " << digit * i << endl;
    }

    return 0;
}
