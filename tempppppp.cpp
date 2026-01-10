// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     long int j=-35000;
//     while(i<5){
//         cout<<"chood"<<  "  "<< j++ <<endl;
//     }
// }


#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int, int>arr[4][5];
    int a;

    for (int i = 0; i < 4; i++) {
        for (int j =0; j < 5; j++) {
            cin >> a;
            arr[i][j] = a;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j =0; j < 5; j++) {
            cout << arr[i][j];
        }
    }
}