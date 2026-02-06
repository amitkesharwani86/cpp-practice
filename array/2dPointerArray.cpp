#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows = 3, cols = 4;

    // Allocate memory for rows (array of pointers)
    int **arr = new int*[rows];

    // Allocate memory for each row
    for(int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Initialize the 2D array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }

    // Print the 2D array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the allocated memory
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}