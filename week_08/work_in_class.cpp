#include <iostream>

using namespace std;

// swap by reference
void mySwap(int& a, int& b);

// swap by pointers
void mySwap(int* a, int* b);

void print(int* arr, int size);
void input(int* arr, int size);
void add(int* arr, int size, int num);
void sort(int* arr, int size);

// merging two sorted arrays
void merge(int* arr1, int size1, int* arr2, int size2, int* arr3);

int main() {
    int x = 10;

    int *             p1  = &x;  // non-const pointer to non-const int
    const int *       p2a = &x;  // non-const pointer to const int
    int const *       p2b = &x;  // also non-const pointer to const int
    int * const       p3  = &x;  // const pointer to non-const int
    const int * const p4  = &x;  // const pointer to const int

    cout << x << endl;  // value of x
    cout << &x << endl; // address of x
    int* p = &x;
    cout << *p << endl; // ouutput value from the address

    int* p5 = nullptr;

    int a = 5;
    int b = 10;

    mySwap(&a, &b);     // mySwap(int*, int*)
    cout << a << endl;
    cout << b << endl;
    
    mySwap(a, b);       // mySwap(int&, int&)
    cout << a << endl;
    cout << b << endl;

    int arr1[5];
    input(arr1, 5);
    sort(arr1, 5);

    int arr2[3];
    input(arr2, 3);
    sort(arr2, 3);

    int arr3[8];
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return 0;
}

void mySwap(int& a, int& b) {
    cout << "Swap with &" << endl;
    int temp = a;
    a = b;
    b = temp;
}

void mySwap(int* a, int* b) {
    cout << "Swap with *" << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

/*
// You should never return pointer to a local variable
int* input1(int size) {
    int arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return arr;
}
*/

void input(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void add(int* arr, int size, int num) {
    for (int i = 0; i < size; ++i) {
        arr[i] += num;
    }
}

void sort(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                mySwap(arr[i], arr[j]);
            }
        }
    }
}

void merge(int* arr1, int size1, int* arr2, int size2, int* arr3) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        arr3[k++] = arr1[i++];
    }
    
    while (j < size2) {
        arr3[k++] = arr2[j++];
    }
}
