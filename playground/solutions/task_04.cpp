#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 100;

void simplify(char* str);

int main() {
    char str[100];
    
    cin >> str;
    
    simplify(str);

    cout << str << endl;

    return 0;
}

void simplify(char* str) {
    int index = 1;    
    for (int i = 1; i < strlen(str); ++i) {
        if (str[index - 1] != str[i]) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}
