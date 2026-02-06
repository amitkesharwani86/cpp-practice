#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> arr, int i, int k, vector<int> subsequence) {
    if (i == arr.size()) {
        int total = 0;
        for(auto c : subsequence) {
            total += c;
        }

        if (total == k) {
            for (auto c : subsequence) {
                cout << c << " ";
            }
            cout << endl;
        }
        
        return;
    }
    fun(arr, i + 1, k, subsequence);
    subsequence.push_back(arr[i]);
    fun(arr, i + 1, k, subsequence);
}

int main() {
    int k = 12;
    vector<int> arr = {2, 3, 1, 4, 5, 7};
    fun(arr, 0, k, {});

    return 0;

}
