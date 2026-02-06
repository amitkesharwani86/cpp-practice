#include<iostream>
using namespace std;
int main (){
     int x;
     cout << "Enter a number: ";
     cin >> x;
     switch(x){
        case 1:
        cout << "You entered 1";
        break;
        case 2:
        cout << "You entered 2";
        break;
        case 3:
        cout << "You entered 3";
        break;
        default:
        cout << "You entered something else";
     }
}