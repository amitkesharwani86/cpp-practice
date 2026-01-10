#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        if (n == 0) return 0;
        
        // Create pairs of (capacity, index) for baskets
        vector<pair<int, int>> basket_pairs;
        for (int i = 0; i < n; ++i) {
            basket_pairs.emplace_back(baskets[i], i);
        }
        
        // Sort baskets by capacity, then by index to maintain leftmost preference
        sort(basket_pairs.begin(), basket_pairs.end());
        
        // Use a set to track available basket indices
        set<int> available;
        for (int i = 0; i < n; ++i) {
            available.insert(i);
        }
        
        int placed = 0;
        
        // Process each fruit in order
        for (int fruit_size : fruits) {
            // Find the leftmost available basket with sufficient capacity
            auto it = available.lower_bound(0);
            bool found = false;
            
            // Iterate through available baskets in order
            for (auto basket_it = available.begin(); basket_it != available.end(); ++basket_it) {
                int basket_idx = *basket_it;
                if (baskets[basket_idx] >= fruit_size) {
                    available.erase(basket_it);
                    placed++;
                    found = true;
                    break;
                }
            }
        }
        
        return n - placed;
    }
};
