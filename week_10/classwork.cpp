#include <iostream>
#include <cstring>
#include <cmath>

int myStrlen(char* str) {
    int i = 0;

    for(; str[i] != '\0'; ++i);

    return i;
}

void myStrcpy(char* str1, char* str2) {
    int i = 0;    
    for (; str2[i] != '\0'; ++i) {
        str1[i] = str2[i];
    } 
    str1[i] = '\0';
}

int myStrcmp(char* str1, char* str2) {
    for (int i = 0; i < std::min(strlen(str1), strlen(str2)); ++i) {
        if (str1[i] > str2[i]) {
            return 1;
        } 
        if (str1[i] < str2[i]) {
            return -1;
        }
    }
    if (strlen(str1) > strlen(str2)) {
        return 1;
    }

    if (strlen(str1) < strlen(str2)) {
        return -1;
    }

    return 0;
}

bool palindrome(char* str) {
    for (int i = 0, j = strlen(str) - 1; i < j; ++i, --j) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
} 

bool isNum(char symbol) {
    return symbol >= '0' && symbol <= '9';
}

int convertToNum(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (!isNum(str[i])) {
            return -1;
        }
    }

    int num = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        num = num * 10 + str[i] - '0';        
    }

    return num;
}

void myStrcat(char* str1, char* str2) {
    int index = strlen(str1);

    for (int i = 0; str2[i] != '\0'; ++i) {

    }

    for (int i = 0; i < strlen(str2); ++i) {
        str1[index++] = str2[i];
    }
    str1[index] = '\0';
}

bool isAlpha(char* str) {
    for (int i = 0; str[i]!= '\0'; ++i) {
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100] = "alabala";

    char str1[100];
    char str2[100];
    
    std::cin >> str1;
    std::cin >> str2;
    
    
    str[7] = 'a';
    str[8] = 'a';

    std::cout << str << std::endl;
    std::cout << strlen(str) << std::endl;
    std::cout << myStrlen(str) << std::endl; 
    
    myStrcpy(str1, str2);

    std::cout << str1 << std::endl;
    std::cout << str1[5] << std::endl;
    
    std::cout << strcmp(str1, str2) << std::endl;
    std::cout << myStrcmp(str1, str2) << std::endl;
   
    myStrcat(str1, str2);
    std::cout << str1 << std::endl;

    std::cout << palindrome(str1) << std::endl;
    std::cout << convertToNum(str1) << std::endl;
    std::cout << isAlpha(str1) << std::endl;
    return 0;
}
