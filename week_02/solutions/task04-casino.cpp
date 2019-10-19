#include <iostream>

using namespace std;

int main() {
    int number = 0;
    double money = 0;

    cin >> number;
    cin >> money;

    if (number == 0) {
        money *= 10;
        // money = money * 10
    } else if (number % 2 == 0 || number % 7 == 0) {
        money *= 1.5;
        // money = money * 1.5
    } else {
        money *= 2.5;
        // money = money * 1.5
    }
    
    cout << "Money: " << money << endl;

    return 0;
}
