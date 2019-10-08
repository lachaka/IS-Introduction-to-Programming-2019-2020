#include <iostream>

using namespace std;

int main() {
    // First solution with help variable
    int a, b, c;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;

    /* Second solution without third variable
    int a, b;
    cin >> a >> b;

    b = a + b;
    a = b - a;
    b = b - a;
    */

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
