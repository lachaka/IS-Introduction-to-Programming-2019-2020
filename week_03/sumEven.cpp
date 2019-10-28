#include <iostream>

using  namespace std;

int main() {

    int a = 0;
    int sum = 0;
    cin >> a;
 
   for (int i = 1; i <= a; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    // sum = (a * (a + 1)) / 2;

    cout << "Sum = " << sum << endl;;
}
