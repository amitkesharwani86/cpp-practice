#include <bits/stdc++.h>
using namespace std;

// Function for right shift
int right_shift(vector<int> arr, int size)
{
    int times;
    cout << "How many times you want to right shift: ";
    cin >> times;
    int no_rightshift=times;
    while (times > 0)
    {
        int temp = arr[size - 1];
        for (int i = size; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        times--;
    }
    cout << "\n\nNow the final array after right shift is " << endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return no_rightshift;
}

// Function for left shift
int left_shift(vector<int> arr, int size)
{
    int times;
    cout << "How many times you want to left shift: ";
    cin >> times;
    int no_leftshift=times;
    while (times > 0)
    {
        int temp = arr[0];
        for (int i = 1; i <size; i++)
        {
            arr[i-1] = arr[i];
        }
        arr[size-1] = temp;
        times--;
    }
    cout << "\n\nNow the final array after left shift is " << endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return no_leftshift;
}

// function for revers
int rev(vector<int> arr, int size){
    int start=0,end=size-1,temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout << "\n\nNow the final array after reverse is " << endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout << "\n\nEnter the number of elements in the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        arr.push_back(x);
    }
    int x, no;
    cout << "\n\nPress 1 for right shift   Press 2 for left shift   Press 3 for reverse: ";
    cin >> x;
    if (x == 1)
    {
        no = right_shift(arr, n);
        cout << "\nArray right shifted sussefully " << no << " times.";
    }
    else if (x==2){
        no =left_shift(arr,n);
        cout << "\nArray left shifted sussefully " << no << " times.";
    }
    else if(x==3){
        no = rev(arr,n);
        cout << "\nArray reversed sussefully ";
    }
    else{
        cout << "invalid input.";
    }
    cout<<endl;
}