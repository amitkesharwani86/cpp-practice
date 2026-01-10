#include<iostream>

using namespace std;

// This is the inline function for single line function replaced just before compilation
inline int GetMax (int& a, int& b ) {  
    return ( a > b ) ? a : b;
}

int main() {
    int a = rand() % 100;
    int b = rand() % 100;
    
    cout << GetMax(a ,b) << "  " << "||" << "  " << a << "  " << b << endl;

    a = a + rand() % 10;
    b = b + rand() % 10;

    cout << GetMax(a ,b) << "  " << "||" << "  " << a << "  " << b << endl;
    
    a = a + rand() % 10;
    b = b + rand() % 10;

    cout << GetMax(a ,b) << "  " << "||" << "  " << a << "  " << b << endl;
    
    a = a + rand() % 10;
    b = b + rand() % 10;

    cout << GetMax(a ,b) << "  " << "||" << "  " << a << "  " << b << endl;
    
    a = a + rand() % 10;
    b = b + rand() % 10;

    cout << GetMax(a ,b) << "  " << "||" << "  " << a << "  " << b << endl;

    return 0;
}