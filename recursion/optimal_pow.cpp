#include <bits/stdc++.h>
using namespace std;

int fun(int m, int n) {
    if (n == 0) return 1;

    if (n % 2 == 0) return fun(m * m, n / 2);
    else return fun(m * m, (n - 1) / 2) * m;
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