#include<bits/stdc++.h>

using namespace std;

void primeFunction(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return;
        }
    }
    cout << n << " is a prime numbar" << endl;
}

int main() {
    int n;
    cout << "Enter the size of array :- ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array :- ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        primeFunction(arr[i]);
    } 

    return 0;

}