#include <iostream>
#include <cstring>

bool brackets(char* str) {
    for (int i = 0; i < strlen(str); ++i) {
        for (int j = i + 1; j < strlen(str); ++j) {
            if (str[i] == '(' && str[j] == ')') {
                str[i] = '*';
                str[j] = '*';
            }
        }
    }

    for (int k = 0; k < strlen(str); ++k) {
        if (str[k] != '*') {
            return false;
        }
    }
    return true;
}

bool checkBrackets(char* str) {
    int count = 0;

    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == '(') {
            count++;
        } else {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }

    return count == 0;
}

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

void foo(int n) {
    std::cout << "Before" << n << std::endl;
    if (n == 0) {
        return;
    }
    foo(n - 1);
    std::cout << "After" << n << std::endl;
}

int minArr(int* arr, int size, int minElem) {
    if (size == 0) {
        return minElem;
    }
    if (*arr < minElem) {
        minElem = *arr;
    }
    return minArr(arr + 1, size - 1, minElem);
}

void input(int arr[], int size, int i) {
    if (size == i) {
        return;
    }
    std::cin >> arr[i];
    return input(arr, size, i + 1);
}

int main() {
    char str[] = "()()";
    int arr[5];
    
    input(arr, 5, 0);
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
