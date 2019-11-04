#include <iostream>

using namespace std;

int main() {
    int a, b;
    do {
        cin >> a >> b;
    } while (a < 1 || b > 50);

    for (int i = a; i <= b; ++i) {
        for (int j = i + 1; j <= b; ++j) {
            for (int k = j + 1; k <= b; ++k) {
                if (i * i + j * j == k * k) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}
