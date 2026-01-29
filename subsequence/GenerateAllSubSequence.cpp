#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> arr, int i, vector<vector<int>> &result, vector<int> subsequence) {
    if (i == arr.size()) {
        result.push_back(subsequence);
        return;
    }
    // Exclude current element
    fun(arr, i + 1, result, subsequence);
    // Include current element
    subsequence.push_back(arr[i]);
    fun(arr, i + 1, result, subsequence);
}

int main() {
   vector<int> arr = {2, 3, 1, 4, 5, 7};
   vector<vector<int>> result;
   fun(arr, 0, result, {});

   for(auto c : result) {
       for (auto b : c) {
           cout << b << "  ";
       }
       cout << endl;
   }

    return 0;
}