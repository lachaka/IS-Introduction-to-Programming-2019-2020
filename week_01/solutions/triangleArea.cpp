#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, h;
    cin >> a >> h;
    double s = (a * h) / 2.0;
    cout << s << endl;

    // Heron's formula
    /*
    int a, b, c;
    double S, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << S << endl;
    */

    return 0;
}
