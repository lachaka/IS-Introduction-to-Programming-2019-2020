#include <iostream>

using namespace std;

int main() {
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = rows - (i + 1); j > 0; --j) {
            cout << "  ";
        }

        for (int j = i + 1; j > 0; --j) {
            cout << j << " ";
        }

        for (int j = 2; j <= i + 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
