#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, r;

    cout << "Enter r: ";
    cin >> r;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    double c;
    c = sqrt(x * x + y * y);
    
    bool result = c <= r;
    cout << boolalpha << result << endl;

    return 0;
}
