#include <iostream>

using namespace std;

int main() {
    int first = 0;
    int second = 0;
    int third = 0;    
    int maxNumber = 0;

    cin >> first;
    cin >> second;
    cin >> third;

    if (first >= second && first >= third) {
        maxNumber = first;
    } else if (second >= third && second >= third) {
        maxNumber = second;
    } else {
        maxNumber = third;
    }

    cout << "Max number: " << maxNumber << endl;
    
    // solution using cmath's function - max()
    // maxNumber = max(first, max(second, third));
    return 0;
}
