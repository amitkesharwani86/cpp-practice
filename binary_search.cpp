#include<iostream>
#include<vector>
using namespace std;
int bin(vector<int>arr,int s,int e,int key){
    int temp=s+(e-s)/2;
    if(arr[temp]==key){
        return temp;
    }
    else if(s>e||s==e){
        return 0;
    }
    else{
        if(arr[temp]>key){
            return bin(arr,s,temp,key);
        }
        else{
            return bin(arr,temp+1,e,key);
        }
    }
}

int main (){
    vector<int>arr;
    cout << "How many element you want to input :-  ";
    int n,k;
    cin>> n;
    cout <<endl;
    for (int i=1;i<=n;i++){
        cout << "enter element no. "<<i<<" of "<<n<<" :-  ";
        cin >> k;
        arr.push_back(k);
    }
    int s=0,e=n-1,key;
    cout << "\nEnter key word:-  ";
    cin >> key;
    int c=bin(arr,s,e,key);
    cout << "\nKey word found or not :-  ";
    if(c|=0){
        cout << "Found at "<<c+1<<" position.";
    } 
    else{
        cout<<"not found";
    }
    
}