#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int temp;
    
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    
    return 0;
}
