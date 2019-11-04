#include <iostream>

using namespace std;

int main() {
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 1; j <= i + 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
