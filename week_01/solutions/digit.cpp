#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    
    cin >> n >> k;
    
    // Two ways to solve the problem
    cout << (n % ((int)pow(10, k))) / (int)(pow(10, k - 1)) << endl;
    cout << (int)(n / pow(10, k - 1)) % 10 << endl;

    return 0;
}
