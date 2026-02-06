// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
//         int n = fruits.size();
//         if (n == 0) return 0;
        
//         // Track which baskets are used
//         vector<bool> used(n, false);
//         int placed = 0;
        
//         // Process each fruit in order (left to right)
//         for (int fruit_size : fruits) {
//             // Find the leftmost available basket with sufficient capacity
//             for (int basket_idx = 0; basket_idx < n; ++basket_idx) {
//                 if (!used[basket_idx] && baskets[basket_idx] >= fruit_size) {
//                     used[basket_idx] = true;
//                     placed++;
//                     break;
//                 }
//             }
//         }
        
//         return n - placed;
//     }
// };


#include<bits/stdc++.h>
using namespace std;

int main (){
    // long long int a = 1234567898765432123 ;
    // unsigned long long int b = 12345678987654321234;
    // cout << sizeof(a) << "  " << sizeof(b) << endl;
    // cout << a << "    " << b ;

    // string name = " Hello World ";
    // string kame = name.substr(1,5);

    // cout << kame << endl;
    // cout << name.replace(  'h' , 'b');


    // int arr[] = {15, 12, 13};
    // // int c = sizeof(int);
    // // cout << *(arr + &c) << "  " << c;
    // int barry[] = arr.sort(begin,end);
    // cout << barry;

    // vector<int , int>arr = {{1,2,3} ,{1,2,0}};
    // cout << arr[1][2];

    // string name;
    // getline(cin,name);
    // cout << name << endl;
    
    // bool helllo = 1;
    // if (!helllo) cout << "hfhfhf";

    // int n;
    // cin >> n;
    // switch (n)
    // {
    // case 1:
    //     cout << "djhvcerv";
    //     break;
    
    // default:
    // cout << 452;
    //     break;
    // }

    
    return 0;
}