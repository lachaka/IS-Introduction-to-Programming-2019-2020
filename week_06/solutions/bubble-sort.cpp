#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int SIZE = 100;

    int arr[SIZE];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; ++j) {
        for (int i = j; i < n; ++i) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
