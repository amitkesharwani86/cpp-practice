#include<bits/stdc++.h>
using namespace std;

int Recursion(int set){

    if (set <= 0)  return 1;
    return set * Recursion( set - 1);
    
}

int main() {
    
    cout << Recursion(5);

    return 0;
} 