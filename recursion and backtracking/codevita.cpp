#include <bits/stdc++.h>
using namespace std;
// (m,n,o) -> ('B', ,C', 'A') select all B fir then select all C and then A
void fun(vector<string>& ans, int m, int n, int o, string s, int total) {

    if (s.size() == total) {
        ans.push_back(s);
        return;
    }

    if (b > 0)
        fun(ans, b - 1, c, a, s + 'B', total);

    if (c > 0)
        fun(ans, b, c - 1, a, s + 'C', total);

    if (a > 0)
        fun(ans, b, c, a - 1, s + 'A', total);
}

int main() {
    int m = 3, n = 11, o = 10;

    vector<string> ans;
    fun(ans, m, n, o, "", m + n + o);

    for (auto &x : ans)
        cout << x << " ";
}
