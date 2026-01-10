#include<iostream>
#include<vector>
using namespace std;
int mountain(vector<int>arr,int s,int e){
    int mid=(s+e)/2;
    if(s>=e){
        return s;
    }
    else if(arr[mid]<arr[mid+1]){
        return mountain(arr,mid+1,e);
    }
    else{
        return mountain(arr,s,mid);
    }

}
int main (){
    vector<int>arr={1,2,3,4,10,11,14,17,1,0};
    int c;
    int s=0,e=arr.size()-1;
    c=mountain(arr,s,e);
    cout << c+1 << " th position is peak of mountain !!!....";
}