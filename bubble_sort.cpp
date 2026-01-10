#include<iostream>
using namespace std;

int main (){
    int arr[]={12,47,94,1,7,65,25,34,44,78,58,62,94,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i]<<"  ";
    }
    return 0;
}