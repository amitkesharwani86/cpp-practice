#include<bits/stdc++.h>
using namespace std;

#define EL endl;

// Default argument pass
int arrayPrint (int arr[] ,int size ,int start = 0) {

    for (int i = start; i < size ; i++ ) {
        cout << arr[i] << EL;
    }

}

int main() {
    int arr[] = {1, 5, 2, 4, 7};
    int size = sizeof(arr) / sizeof(int);

    arrayPrint(arr, size, 2);
    cout << EL;
    arrayPrint(arr, size);

    return 0;

}