#include <iostream>

using  namespace std;

int main() {

    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 13 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
