#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double x1, x2;    
    
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "x = [-inf,+inf]" << endl;
            } else {
                cout << "No solution" << endl;
            }
        } else {
            x1 = -c / b;
            cout << "x = " << x1 << endl;
        }
    } else {
        double d = b * b - 4 * a * c;
        if (d == 0) {
            x1 = x2 = -b / (2 * a);
            cout << "x1 = x2 = " << x1 << endl;
        } else if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);

            cout << "x1 = " << x1 << endl; 
            cout << "x2 = " << x2 << endl;    
        } else {
            cout << "No real solution" << endl;
        }
    }
    return 0;
}
