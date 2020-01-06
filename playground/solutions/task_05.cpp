#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 100;

void removeDuplicates(char* str);

int main() {
    char str[100];
    
    cin >> str;
    
    removeDuplicates(str);

    cout << str << endl;

    return 0;
}

void removeDuplicates(char* str) {   
    int index = 0;
    for (int i = 0; i < strlen(str); ++i) {
        bool found = false;        
        for (int j = 0; j < i; ++j) {
            if (str[j] == str[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            str[index++] = str[i];
            found = false;        
        }
    }
    str[index] = '\0';
}
