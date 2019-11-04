#include <iostream>

using namespace std;

int main() {
    int number;
    int lastNumber;

    int sum = 0;
    int count = 0;

    cin >> number;

    do {
        count++;
        sum += number;
        lastNumber = number;
        cin >> number;
    } while(number != lastNumber);

    ++count;
    sum += number;
    cout << "Count: " << count << endl;
    cout << "Average: " << (double)sum / count << endl;

    return 0;
}
