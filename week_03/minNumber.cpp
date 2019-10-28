#include <iostream>

using  namespace std;

int main() {
    int count;
    int num;

    cin >> count >> num;

    int minNum = num;
    int maxNum = num;

    for (int i = 1; i < count; ++i) {
        cin >> num;
        if(minNum > num){
            minNum = num;
        }
        if(maxNum < num){
            maxNum = num;
        }
    }
    cout << minNum << ", " << maxNum << endl;
}

