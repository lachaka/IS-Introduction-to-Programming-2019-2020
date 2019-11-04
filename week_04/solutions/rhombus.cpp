#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int spacesBefore = 2 * a - 2;
    int spacesIn = 3;

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < spacesBefore; ++j) {
            cout << " ";
        }
        spacesBefore -= 2;      
        cout << "*";
        if (i == 0) {
            cout << endl;
            continue;
        }

        for (int j = 0; j < spacesIn; ++j) {
            cout << " ";
        } 
        spacesIn += 4;

        cout << "*" << endl;
    } 
    spacesIn -= 8;
    spacesBefore += 4;

    for (int i = a - 1; i > 0; --i) {
        for (int j = 0; j < spacesBefore; ++j) {
            cout << " ";
        }
        cout << "*";
        spacesBefore += 2;

        if (i == 0) {
            cout << endl;
            continue;
        }

        for (int j = 0; j < spacesIn; ++j) {
            cout << " ";
        } 
        spacesIn -= 4;

        if (i == 1) {
            cout << endl;
            break;
        }

        cout << "*" << endl;
    } 
    
    return 0;
}
