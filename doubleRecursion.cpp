#include <iostream>
#include <vector>

using namespace std;

// this is the double recursion 

int num = 0;

int call (int n , int m) {
    if ( n < 0 or m < 0 ) {
         return 0;
    }

    cout << "Hello" << endl;
    (n > 0 ) ? call (n-1 , m) : n = 5 ;
    cout << "World my bro's " << m << "   "<< n << endl;
    call (n , --m  );
}

int main() {
    call ( 5 , 5);

    return 0;
}