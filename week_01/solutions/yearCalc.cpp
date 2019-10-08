#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int years; 
    double weeks, days, hours, mins, seconds;
    
    cout << "Enter year: ";		
    cin >> years;

    weeks = years * 52.18;
    days = weeks * 7;
    hours = days * 24;
    mins = hours * 60;
    seconds = mins * 60;

    cout << "Years: " << years << endl
        << "weeks: " << weeks << endl
        << "days: " << days << endl
        << "hours: " << hours << endl
        << "mins :" << mins << endl
        << "seconds: " << seconds << endl;
    
    return 0;
}
