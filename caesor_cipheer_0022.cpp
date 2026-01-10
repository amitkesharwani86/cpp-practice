#include<bits/stdc++.h>
using namespace std;

string encription(string &text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

string decription(string &text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base - shift + 26) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    int n, shift;
    string text;
    do {
        cout << "Enter 1 for encryption\nEnter 2 for decryption\nEnter 3 to exit\n";
        cin >> n;
        cout << "\n\n";
        cin.ignore();
        if (n == 1) {
            cout << "Enter the text to encrypt: ";
            getline(cin, text);
            cout << "Enter the shift value: ";
            cin >> shift;
            cin.ignore();
            cout << "Encrypted text: " << encription(text, shift) << endl;
        } else if (n == 2) {
            cout << "Enter the text to decrypt: ";
            getline(cin, text);
            cout << "Enter the shift value: ";
            cin >> shift;
            cin.ignore();
            cout << "Decrypted text: " << decription(text, shift) << endl;
        } else if (n == 3) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (n != 3);
}