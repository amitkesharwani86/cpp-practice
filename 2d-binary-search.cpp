#include<iostream>
using namespace std;

void binary_search_2d(int arr[5][5], int rows, int cols, int target) {
    int start = 0, end = rows * cols - 1;
    while (start <= end) {
        int mid= start + (end - start) / 2;
        int middle_value = arr[mid / cols][mid % cols];
        if(middle_value==target){
            cout << "Element found at position : ["<< mid / cols << "],[" << mid % cols << "]\n";
            return;
        }else if(middle_value<target){
            start = mid + 1;
        }else{
            end=mid-1;
        }
    }
    cout<<"Element "<<target<<" not found in the array.\n";
    return;
}

int main(){
    cout << "This is a program for 2D binary search.\n";
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int target;
    cout << "Enter the target value to search: ";
    cin >> target;
    binary_search_2d(arr, 5, 5, target);
    

    return 0;
}