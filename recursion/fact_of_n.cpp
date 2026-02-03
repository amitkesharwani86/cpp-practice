#include<bits/stdc++.h>
using namespace std;

int fun(int n) {
    if (n == 0) {
        return 1;
    }

    return fun (n - 1) * n;
}

int main() {
    int n = 0;
    cout << "Enter value of n : ";
    cin >> n;

    int tot = fun(n);
    cout << "Total = " << tot;

    return 0;
}