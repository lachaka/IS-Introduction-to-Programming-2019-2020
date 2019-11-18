#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int spacesIn = 3 * n - 2;
    int spacesBefore = 0;
    int spacesAfter = n - 3;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        if (i == 1 || i == n) {
            for (int j = 0; j < 2 * n; ++j) {
                cout << "* ";
            }
            cout << endl;
            continue;
        }
        cout << "*";

        for (int j = 0; j < spacesBefore; ++j) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < spacesIn; ++j) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < spacesAfter; ++j) {
            cout << " ";
        }
        cout << "*";
        spacesAfter--;
        spacesBefore++;
        cout << endl;
    }
 
    return 0;
}
