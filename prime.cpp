#include<iostream>
using namespace std ;

int main(){
    int n,i=2,j=0;
    cout << "Enter a number: ";
    cin >> n;
    while(n>=i*i){
        if(n%i==0){
            j=1;
            cout << i << " is a factor of " << n << endl;
            break;
        }
        else {
            i++;
        }
    }
    if(j==0){
        cout << n << " is a prime number" << endl;
    }

}