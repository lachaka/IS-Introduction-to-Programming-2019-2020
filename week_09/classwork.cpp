#include <iostream>

const int size = 10;

void input(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >>  arr[i];
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverse(int arr[], int n) {
    for (int i = 0, j = n - 1; i < n / 2; ++i, --j) {
        std::swap(arr[i], arr[j]);
    }
}

// void function - changing array's size by the given pointer
void remove(int arr[], int* size, int number) {
    int index = 0;
    for (int i = 0; i < *size; ++i) {
        if (arr[i] != number) {
            arr[index++] = arr[i];
        }
    }
    *size = *size - index + 1;
}

// int function - return changed array's size
int remove(int arr[], int size, int number) {
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] != number) {
            arr[index++] = arr[i];
        }
    }
    return size - index + 1;
}

int* minElem(int arr[], int n) {
    int minIndex = 0;
    int minElem = arr[minIndex];

    for (int i = 1; i < n; ++i) {
        if (minElem > arr[i]) {
            minElem = arr[i];
            minIndex = i;
        }
    }

    return &arr[minIndex];
}

void printMatrix(int arr[][size], int rows, int cows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cows; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void inputMatrix(int arr[][size], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }
}

void replace(int arr[][size], int rows, int cols, int a, int b) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == a) {
                arr[i][j] = b;
            }
        }
    }
}

int main() {  
    int n = 5;
    int arr[n] = {2, 10, 0, 10, -1};
    int matrix[size][size];
    
    // testing min() function
    std::cout << "testing min() function\n";
    int* p = minElem(arr, n);
    std::cout << minElem(arr, n) << std::endl;
    std::cout << p << std::endl;        // same as the line above
    std::cout << arr << std::endl;      // address of the array
    std::cout << p - arr << std::endl;  // elements between min element and the first one
    // end of min() testing

    print(arr, n);
    reverse(arr, n);
    print(arr, n);

    n = remove(arr, size, 10);
    print(arr, n);

    inputMatrix(matrix, 2, 5);     
    printMatrix(matrix, 2, 5);
 
    replace(matrix, 2, 5, 4, 0);
    printMatrix(matrix, 2, 5);

    return 0;
}
