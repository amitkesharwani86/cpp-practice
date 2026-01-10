#include <vector>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        if (n == 0) return 0;
        
        // Track which baskets are used
        vector<bool> used(n, false);
        int placed = 0;
        
        // Process each fruit in order (left to right)
        for (int fruit_size : fruits) {
            // Find the leftmost available basket with sufficient capacity
            for (int basket_idx = 0; basket_idx < n; ++basket_idx) {
                if (!used[basket_idx] && baskets[basket_idx] >= fruit_size) {
                    used[basket_idx] = true;
                    placed++;
                    break;
                }
            }
        }
        
        return n - placed;
    }
};
