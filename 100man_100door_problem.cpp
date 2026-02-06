#include <iostream>
using namespace std;
int main()
{
    int arr[100], std = 0;
    for (int i = 0; i < 100; i++){
        arr[i] = 0;
    }
    for (int i =1; i <= 100; i++){
        if (i % 3 == 0){
            for (int j = 3; j < 100; j=j+3){
                    if (arr[j-1] == 0)
                        arr[j-1] = 1;
                    else
                        arr[j-1] = 0;
                }
            }
        else if (i%2==0){
            for (int j = 2; j < 100; j=j+2){
                if (arr[j-1] == 0)
                arr[j-1] = 1;
                else
                arr[j-1] = 0;
            }
        
        }
        else{
            for(int j=1;j<100;j++){
                if(arr[j-1]==0)
                arr[j-1]=1;
                else
                arr[j-1]=0;
            }
        }
        
    }
    for(int i=0;i<100;i++){
        if(arr[i]==1)
        std++;
    }
    cout<< std<<" doors are those doors whole still open after passing 100 persons with 100 doors ";
    return 0;
}