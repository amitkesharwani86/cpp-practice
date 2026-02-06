#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> freq(26, 0);
    string s;
    
    cout << "Enter the string: ";
    getline(cin, s);  // Use getline to handle spaces
    
    if (s.empty()) {
        cout << "Empty string provided!" << endl;
        return 0;
    }

    // Count frequency of each character (case-insensitive)
    for (char c : s) {
        if (isalpha(c)) {
            char lower_c = tolower(c);
            freq[lower_c - 'a']++;
        }
    }

    // Find character(s) with maximum frequency
    int maxFreq = 0;
    vector<char> maxChars;
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChars.clear();
            maxChars.push_back('a' + i);
        } else if (freq[i] == maxFreq && freq[i] > 0) {
            maxChars.push_back('a' + i);
        }
    }

    // Display frequency table
    cout << "\nCharacter Frequency Table:" << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << "'" << char('a' + i) << "' : " << freq[i] << endl;
        }
    }

    // Display result
    cout << "\nResult:" << endl;
    cout << "--------" << endl;
    
    if (maxFreq == 0) {
        cout << "No alphabetic characters found in the string!" << endl;
    } else if (maxChars.size() == 1) {
        cout << "The character '" << maxChars[0] << "' has the highest frequency: " << maxFreq << endl;
    } else {
        cout << "Multiple characters have the highest frequency (" << maxFreq << "):" << endl;
        for (char c : maxChars) {
            cout << "  '" << c << "'" << endl;
        }
    }

    return 0;
}
