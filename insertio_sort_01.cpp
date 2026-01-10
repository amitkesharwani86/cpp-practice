#include<iostream>
#include<vector>
using namespace std;

void instert(vector<int>arr){
    int n = arr.size(),j;
    for(int i=1;i<n;i++){ 
        int temp=arr[i];
        for(j=i;j>0;j--){
            if(arr[j-1]>temp){
                arr[j]=arr[j-1];
            }else{
                break;
            }
        }
        arr[j]=temp;
    }
    cout << "Sorted array:- ";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}


int main (){
    vector<int>arr;
    int n,temp;
    cout <<"Enter how many element ou want to input:- ";
    cin>> n;
    for (int i=0;i<n;i++){
        // cout << "Enter element "<<i<<" : ";
        // cin >>temp;
        temp=rand()%101;
        arr.push_back(temp); 
    }
    instert(arr);
}