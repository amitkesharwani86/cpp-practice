#include<iostream>
using namespace std;

int main (){
    char a;
    int x;
    cout << "Enter no of lines ";
    cin >> x;
    for(int i=0;i<x;i++){
        a='A' + x -i - 1;
        for(int j=0;j<=i;j++){
            a=a+j;
            cout<< a<< " ";
        }
        cout<< " \n";
    }
}