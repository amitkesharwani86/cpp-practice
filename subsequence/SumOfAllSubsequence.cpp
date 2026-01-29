#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> arr, int i, vector<vector<int>> &result, vector<int> subsequence) {
    if (i == arr.size()) {
        result.push_back(subsequence);
        return;
    }
    fun(arr, i + 1, result, subsequence);
    subsequence.push_back(arr[i]);
    fun(arr, i + 1, result, subsequence);
}

int main() {
   vector<int> arr = {2, 3, 1};
   vector<vector<int>> result;
   fun(arr, 0, result, {});

   int total = 0;
   for(auto c : result) {
       for (auto b : c) {
           total += b;
       }
   }
   cout << "Total Sum = " << total;

    return 0;

}
