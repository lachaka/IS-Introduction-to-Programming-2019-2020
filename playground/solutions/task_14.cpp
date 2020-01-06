#include <iostream>

using namespace std;

int divisorsCount(int num, int divider) {
    if (num == divider) {
        return 1;
    }

    if (num % divider == 0) {
        return 1 + divisorsCount(num, divider + 1);
    }
    return divisorsCount(num, divider + 1);
}

bool isPrime(int num) {
    return 2 == divisorsCount(num, 1);
} 

int findPrimesSum(int n, int k) {
   /*if (k == 0) {
        return 0;
    }
    */
    if (n > k) {
        return 0;
    }

    if (isPrime(n)) {
    //    return n + findPrimesSum(n + 1, k - 1);
        return n + findPrimesSum(n + 1, k);
    }    

    return findPrimesSum(n + 1, k);
}

int main() {
    int n, k;

    cin >> n;
    cin >> k;

    cout << findPrimesSum(n, k) << endl;
    
    return 0;
}
