#include<bits/stdc++.h>
using namespace std;

void febo(int n, int term = 1) {
    if((n + 1) == 0) {
        cout << "The term is " << term ;
        return;
    }
    
    term += term;
    febo(n - 1, term);
}

int main() {
    int n;

    cout << "Enter the term :- ";
    cin >> n;

    febo(n);
}