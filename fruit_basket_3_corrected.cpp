#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        if (n == 0) return 0;
        
        // Create array of basket indices and sort by basket capacity
        vector<int> basket_indices(n);
        for (int i = 0; i < n; ++i) {
            basket_indices[i] = i;
        }
        
        // Sort basket indices based on basket capacity
        sort(basket_indices.begin(), basket_indices.end(), 
             [&baskets](int a, int b) {
                 return baskets[a] < baskets[b];
             });
        
        // Track which baskets are used
        vector<bool> used(n, false);
        int placed = 0;
        
        // Process each fruit in order
        for (int fruit_idx = 0; fruit_idx < n; ++fruit_idx) {
            int fruit_size = fruits[fruit_idx];
            
            // Find the leftmost available basket with sufficient capacity
            for (int basket_idx = 0; basket_idx < n; ++basket_idx) {
                int actual_basket = basket_indices[basket_idx];
                if (!used[actual_basket] && baskets[actual_basket] >= fruit_size) {
                    used[actual_basket] = true;
                    placed++;
                    break;
                }
            }
        }
        
        return n - placed;
    }
};
