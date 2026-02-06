//            2     3     4 
//   x       x     x     x              th
//  e = 1 + --- + --- + --- + ...... + n term 
//          2!    3!    4!

#include<bits/stdc++.h>
using namespace std;

double taylor(double x, int n) {
    static double s;
    if(n == 0) {
        return s;
    }

    s = 1 + x * s / n;
    return taylor(x, n - 1);
}

int main() {
    double x = 0.0;
    cout << "Enter value of \"x\" : ";
    cin >> x;

    int n = 0;
    cout << "Enter no. of terms : ";
    cin >> n;


    double total = 0.0;
    total = taylor(x, n);

    cout << "Total = " << total;
}