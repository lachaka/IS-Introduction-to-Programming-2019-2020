
#include <iostream>
#include <cstring>

using namespace std;

const int STR_SIZE = 256;

void findMin(char* str, char* minWord);
void findMax(char* str, char* maxWord);

int main() {
    char str[STR_SIZE];
    char minWord[STR_SIZE] = {'\0'};
    char maxWord[STR_SIZE] = {'\0'};

    cin.getline(str, STR_SIZE);

    findMin(str, minWord);
    findMax(str, maxWord);

    cout << "Max: " << maxWord << endl;
    cout << "Min: " << minWord << endl;

    return 0;
}

void findMin(char* str, char* minWord) {
    int start = 0;
    for (int i = 0; i <= strlen(str); ++i) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (strlen(minWord) > i - start) {
                strncpy(minWord, str + start, i - start);
                minWord[i - start] = '\0';
            }

            if (strlen(minWord) == 0) {
                strncpy(minWord, str, i);
            }

            start = i + 1;
        }
    }
}

void findMax(char* str, char* maxWord) {
    int start = 0;
    for (int i = 0; i <= strlen(str); ++i) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (strlen(maxWord) < i - start) {
                strncpy(maxWord, str + start, i - start);
                maxWord[i - start] = '\0';
            }
            start = i + 1;
        }
    }
}
