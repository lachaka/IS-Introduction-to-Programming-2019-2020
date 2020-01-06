#include <iostream>
#include <cstring>

using namespace std;

const int STR_SIZE = 256;
const int ALPHABET_SIZE = 26;
const int DIFF = 6;

void countLetters(char* str, int* arr);
void outputArray(int* arr);

int main() {
    char str[STR_SIZE];
    int arr[ALPHABET_SIZE] = {0};

    cin.getline(str, STR_SIZE);
    
    countLetters(str, arr);
    outputArray(arr);

    return 0;
}

void countLetters(char* str, int* arr) {   
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            arr[str[i] + ALPHABET_SIZE + DIFF - 'a']++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            arr[str[i] - 'a']++;
        }
    }
}

void outputArray(int* arr) {
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        if (arr[i] != 0) {
            cout << (char)('a' + i) << ": " << arr[i] << endl;
        }
    }
}
