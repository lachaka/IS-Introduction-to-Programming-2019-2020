#include <iostream>
#include <cstring>

using namespace std;

const int STR_SIZE = 256;

bool isPalindrome(char* str) {
    for (int i = 0, j = strlen(str) - 1; i < j; ++i, --j) {
        if (str[i] != str[j]) {
            return false;
        }
    }   
    return true;
}

void findPalindrome(char* str, char* result) {
    char palindrome[STR_SIZE * 2];
    int index = strlen(str);

    strcpy(palindrome,  str);

    for (int i = index - 1; i >= 0; --i) {
        palindrome[index++] = str[i];
    } 

    palindrome[index] = '\0';

    index = strlen(str);
    
    char copyPalindrome[STR_SIZE * 2];
    strcpy(copyPalindrome, palindrome);

    while (index  < strlen(copyPalindrome)) {
        for (int i = index; copyPalindrome[i] != '\0'; ++i) {
            copyPalindrome[i] = copyPalindrome[i + 1];
        }

        if (isPalindrome(copyPalindrome)) {
            strcpy(palindrome, copyPalindrome);
        }
    }

    strcpy(result, index + palindrome);
}

int main() {
    char str[STR_SIZE];
    char result[STR_SIZE];

    cin >> str;
    
    findPalindrome(str, result);   

    cout << strlen(result);

    if (strlen(result) != 0) {
        cout << ", " << result;
    }

    cout << endl;

    return 0;
}


