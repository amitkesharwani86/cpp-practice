#include <bits/stdc++.h>
using namespace std;

class C {
    int s;
public:
    C(int x = 3) { s = x % 26; }
    string e(const string& t) {
        string r = "";
        for (char c : t) {
            if (isalpha(c)) {
                char b = isupper(c) ? 'A' : 'a';
                r += char((c - b + s) % 26 + b);
            } else r += c;
        }
        return r;
    }
    string d(const string& t) {
        string r = "";
        for (char c : t) {
            if (isalpha(c)) {
                char b = isupper(c) ? 'A' : 'a';
                r += char((c - b - s + 26) % 26 + b);
            } else r += c;
        }
        return r;
    }
    void setS(int x) { s = x % 26; }
    int getS() const { return s; }
};

int main() {
    int ch, n;
    string t;
    cout << "Shift: ";
    cin >> n;
    cin.ignore();
    C c(n);
    do {
        cout << "1.Encrypt\n2.Decrypt\n3.Change shift\n4.Exit\nChoice: ";
        cin >> ch;
        cin.ignore();
        if (ch == 1) {
            cout << "Text: ";
            getline(cin, t);
            cout << c.e(t) << "\n";
        } else if (ch == 2) {
            cout << "Text: ";
            getline(cin, t);
            cout << c.d(t) << "\n";
        } else if (ch == 3) {
            cout << "Shift: ";
            cin >> n;
            c.setS(n);
            cin.ignore();
        }
    } while (ch != 4);
}