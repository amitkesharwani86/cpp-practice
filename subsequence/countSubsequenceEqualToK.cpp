#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> arr, int i, int k, vector<int> subsequence, int &total) {
    if (i == arr.size()) {
        int sum = 0;
        for(auto c : subsequence) {
            sum += c;
        }

        if (sum == k) {
            total++;
        }
        
        return;
    }
    fun(arr, i + 1, k, subsequence, total);
    subsequence.push_back(arr[i]);
    fun(arr, i + 1, k, subsequence, total);
}

int main() {
    int k = 12;
    int total = 0;
    vector<int> arr = {2, 3, 1, 4, 5, 7};
    fun(arr, 0, k, {}, total);
    cout << "Toral no. of (Subsequence == k) :- " << total;
    return 0;

}
