// Y-axis
// |       *
// |      *
// |     *       
// |            
// |           *
// |          *
// |________(*)_____________ x-axis
// arr[]={7,8,9,10,11,1,2,3,4,5}

#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int>& arr, int s, int e) {
    if (s == e) {
        return s;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] > arr[e]) {
        return binary(arr, mid + 1, e);
    } else {
        return binary(arr, s, mid);
    }
}

int main() {
    vector<int> arr = {7, 8, 9, 10, 11, 12,22,1, 2, 3, 4, 5,7,8,9,10};
    int n, s = 0, e = arr.size() - 1;
    n = binary(arr, s, e);
    cout << "The index of the element is: " << n << endl;
    return 0;
}
