#include <iostream>

using  namespace std;

int main() {
    int a, b;
    char mathOperator;
    
    cin >> a >> mathOperator >> b;

    switch (mathOperator) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << (double)a / b << endl;
            break;
        case '%':
            cout << a % b << endl;
            break;
    }
    
    return 0;
}
