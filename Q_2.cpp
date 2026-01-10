#include <iostream>
using namespace std;

int frequency(string s, char c)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string text = "aabaabaaaaaaaaaaaaa";
    string patt = "abaa";
    int n = text.size();
    int m = patt.size();
    int ax=frequency(patt,'a');
    int bx=frequency(patt,'b');
    for (int i = 0; i <= n - m; i++)
    { 
        int tax=frequency(text.substr(i,i+m-1),'a');
        int tbx=frequency(text.substr(i,i+m-1),'b');
        int aax=abs(ax-tax);
        int bby=abs(bx-tbx);
        if ((aax +bby)==0||(aax +bby)==1 ||ax==(m-1)||bx==(m-1)){
            cout << "Pattern found at index " << i << endl;
        }
    }
    return 0;
}