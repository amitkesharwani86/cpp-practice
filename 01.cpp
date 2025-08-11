#include<iostream>
#include<vector>
using namespace std;

int main () 
{
    vector<int>lool;
    int c;
    for(int i=0;i<=10;i++){
        cin >> c;
        lool.push_back(c);
        cout << lool.size();
    }
    for (int i:lool){
        cout << i;
    }
    int a,b;
    cin >>  a >> b;
    cout << a+b;
    return 0;
}