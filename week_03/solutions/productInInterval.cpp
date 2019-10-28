#include <iostream>

using  namespace std;

int main() {
    int a = 0;
    int b = 0;

    cin >> a >> b;

    unsigned long long result = 1;
    for (int i = a; i <= b; ++i) {
        result *= i;
    }
    cout << result << endl;

    return 0;
}

