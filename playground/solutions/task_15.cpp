#include <iostream>

using namespace std;

bool existsPath(int arr[][6], int x, int y, int endX, int endY, int rows, int cols) {
    if (x >= rows || y >= cols || x < 0 || y < 0) {
        return false;
    }

    if (arr[x][y] != 1) {
        return false;
    }

    if (x == endX && y == endY) {
        return true;
    }

    arr[x][y] = 0;
    bool hasWay = existsPath(arr, x + 1, y, endX, endY, rows, cols) ||
                  existsPath(arr, x - 1, y, endX, endY, rows, cols) ||
                  existsPath(arr, x, y + 1, endX, endY, rows, cols) ||
                  existsPath(arr, x, y - 1, endX, endY, rows, cols);

    arr[x][y] = 1;
    
    return hasWay;
}

int main() {
    int arr[][6] = {{1, 0, 0, 0, 0, 0},
                    {1, 1, 1, 0, 0, 0},
                    {0, 0, 1, 0, 0, 0},
                    {0, 0, 1, 1, 1, 1}};
    int startX, startY;
    int endX, endY;
    
    cin >> startX;
    cin >> startY;
    
    cin >> endX;
    cin >> endY;
    
    cout << boolalpha << existsPath(arr, startX, startY, endX, endY, 4, 6) << endl;    
    return 0;
}
