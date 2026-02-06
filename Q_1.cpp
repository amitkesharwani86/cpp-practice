#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    string text="abababababbbababbbaabaababa";
    string patt="abab";
    int n=text.size();
    int m=patt.size();
    int s;
    for(int i=0;i<=n-m;i++){
        s=0;
        for(int j=0;j<m;j++){
            if(text[i+j]!=patt[j]) {
            s=1;
            break;
            }
        }
        if(s==0){
            cout<< "string maches after shift "<< i;
            cout<<endl;
            i=i+m-1;
        }
    }

    return 0;
}