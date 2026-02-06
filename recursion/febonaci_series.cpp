#include<bits/stdc++.h>
using namespace std;

int febo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return febo(n - 1) + febo(n - 2);
}

int main() {
    int n = 0;
    cout << "Enter nth term : ";
    cin >> n;

    for(int i = 0; i <= n; i++) {
        cout << febo(i) << " ";
    }
    cout << endl;

    return 0;
}