#include <iostream>

using namespace std;

int main() {
    for (int i = 100; i < 1000; ++i) {
        int firstDigit = i % 10;        
        int secondDigit = (i / 10) % 10;
        int thirdDigit = i / 100;
        
        if (firstDigit == secondDigit || firstDigit == thirdDigit 
            || secondDigit == thirdDigit) {
            continue;                                    
        }

        cout << i << " ";
    }

    cout << endl;

    return 0;
}
