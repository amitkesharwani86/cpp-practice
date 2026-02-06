#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> arr, int i, int k, vector<int> subsequence) {
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
            return true;
        }
        
        return false;
    }
    if (fun(arr, i + 1, k, subsequence)) return true;
    subsequence.push_back(arr[i]);
    if (fun(arr, i + 1, k, subsequence)) return true;
    return false;
}

int main() {
    int k = 12;
    vector<int> arr = {2, 3, 1, 4, 5, 7};
    if(fun(arr, 0, k, {})) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;

}

