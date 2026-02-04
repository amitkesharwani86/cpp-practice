//  value = [-1, -1, -1, -1, -1, -1, -1, -1, -1]
//  index = [0,  1,  2,  3,  4,  5,  6,  7,  8]

#include<bits/stdc++.h>
using namespace std;

int febo(vector<int>& arr, int n) {
    if (n <= 1) return n;

    if (arr[n] != -1) return arr[n];

    arr[n] = febo(arr, n - 1) + febo(arr, n - 2);
    return arr[n];
}

int main() {
    int n = 0;
    cout << "Enter nth term : ";
    cin >> n;
    vector<int> arr(n + 1, -1);

    cout << febo(arr, n);

    return 0;
}
