//operator
#include<iostream>
using namespace std;
int main (){
    int a=4;
    int b=5;

    cout << "a | b = " << (a | b) << "\n";
    cout << "a & b = " << (a & b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "~a = " << (~a)<< endl;

    // left shift(<<) and right shift (>>)
    cout << "a << 2 = " << (a << 2) << endl;
    cout << "a >> 2 = " << (a >> 2) << endl;
}
