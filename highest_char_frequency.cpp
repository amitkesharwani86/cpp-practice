#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int>freq(26,0);
    string s;
    
    cout << "Enter the string: ";
    getline(cin , s);

    for(char a:s){
        int b = a;

        if (b > 96 && b < 123) freq[b - 'a']++ ; 
        else if (b > 64 && b < 91) freq[b - 'A']++;
    }

    char a = 'a';
    int countMax = freq[0];
    char maxChar = 'a';

    for (int i : freq) cout << i << "  :-  " << a++ << endl;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > countMax) {
            countMax = freq[i];
            maxChar = 97 + i;
        }
    }

    cout << "The character | " << maxChar << " | with the highest frequency : " << countMax<< endl;


    return 0;
}