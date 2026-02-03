#include <bits/stdc++.h>
using namespace std;

int fun(int m, int n) {
    if (n == 0) return 1;

    return fun(m, n - 1) * m;
}

int main() {
    int n = 0;
    int m = 0;

    cout << "Enter value of m : " ;
    cin >> m;
    cout << "Enter power : ";
    cin >> n;

    int sum = fun(m, n);
    cout << "Total = " << sum;

    return 0;
}