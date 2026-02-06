#include <bits/stdc++.h>
using namespace std;

int count_min_swaps(string s) {
    int n = s.size();

    // Pair each character with its original index
    vector<pair<char, int>> char_with_index(n);
    for (int i = 0; i < n; ++i)
        char_with_index[i] = {s[i], i};

    // Sort the characters lexicographically
    sort(char_with_index.begin(), char_with_index.end());

    // Build a mapping from current index to sorted position
    vector<int> position_map(n);
    for (int i = 0; i < n; ++i)
        position_map[char_with_index[i].second] = i;

    // Apply cycle decomposition on position_map
    vector<bool> visited(n, false);
    int swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (visited[i] || position_map[i] == i)
            continue;

        int j = i, cycle_size = 0;
        while (!visited[j]) {
            visited[j] = true;
            j = position_map[j];
            cycle_size++;
        }
        swaps += (cycle_size - 1);
    }

    return swaps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << count_min_swaps(s) << '\n';
    }
    return 0;
}
