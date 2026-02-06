#include<bits/stdc++.h>
using namespace std;

int main() {
    int *p, *q;
    p = new int[5];
    q = new int[10];

    for (int i = 0; i < 5; i++) {
        p[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        if(i < 5) {
            q[i] = p[i];
        } else {
            q[i] = 7 * i;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << q[i] << "  ";
    }
    return 0;
}