#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hours1, hours2;
    int mins1, mins2;

    cin >> hours1 >> hours2;

    mins1 = hours1 % 100;
    mins2 = hours2 % 100;

    hours1 = (hours1 / 100) % 12;
    hours2 = (hours2 / 100) % 12;

    mins1 += hours1 * 60;
    mins2 += hours2 * 60;

    int result = abs(mins1 - mins2);


    int resultHours = result / 60;
    int resultMins = result % 60;
    if (resultHours > 6) {
        resultHours = 12 - resultHours;
    }

    if (resultHours < 10) {
        cout << "0";
    }
    cout << resultHours;
    if (resultMins < 10) {
        cout << 0;
    }
    cout << resultMins << endl;

    return 0;
}
