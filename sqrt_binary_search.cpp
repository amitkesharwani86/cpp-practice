// searching squar root  by binary search
#include <bits/stdc++.h>
using namespace std;

//function for squaroot using binary search
double sqrt(int number,double s,double e,double ans){
    double mid=s+e/2;
    if(ans*ans==number){
        return ans;
    }
    else if(mid*mid<number){
        ans=mid;
        s=mid;
        return sqrt(number,s,e,ans);
    }
    else{
        ans=mid;
        e=mid;
        return sqrt(number,s,e,ans);
    }
}

int main (){
    int number;
    cout <<"ENter the number which you want to take squar root: ";
    cin>> number ;
    double s=0,e=number,ans=-1;
    double anss=sqrt(number);
    cout << "Squar root of "<<number <<" is "<<anss<<".";
}