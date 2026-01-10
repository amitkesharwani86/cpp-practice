#include<bits/stdc++.h>
using namespace std;

void max_row(int arr[5][5]){
  int pre=0,max_sum=0;
  for (int i=0;i<5;i++){
    int sum=0;
    for (int j = 0; j < 5; j++)
    {
      sum+=arr[i][j];
    }
    if(max_sum<sum){
      pre=i+1;
      max_sum=sum;
    }
  }   
  cout<<"Row "<<pre<<" is greatest";
}


void max_col(int arr[5][5]){
  int pre=0,max_sum=0;
  for (int i=0;i<5;i++){
    int sum=0;
    for (int j = 0; j < 5; j++)
    {
      sum+=arr[j][i];
    }
    if(max_sum<sum){
      pre=i+1;
      max_sum=sum;
    }
  }   
  cout<<"\ncolumn "<<pre<<" is greatest\n\n";
}

void top_bottom__bottom_top(int arr[5][5]){
  for(int i=0;i<5;i++){
    if(i&1){
      for(int j=4;j>=0;j--){
        cout<<arr[j][i]<<"  ";
      }
    }else{
      for(int j=0;j<5;j++){
        cout<<arr[j][i]<<"  ";
      }
    }
    cout <<"\n";
  }

}


int main (){
  int arr[5][5] ;
//   int n,m;
  cout<<"This is program for 2d maximum sum of row\n";
//   cout<< "Enter no. of rows";
//   cin>>n;
//   cout<< "Enter no. of column";
//   cin>>m;
  for (int i=0;i<5;i++){
    for (int j = 0; j < 5; j++)
    {
      cin>>arr[i][j];
    }
    cout <<"\n";
  }   
  for (int i=0;i<5;i++){
    for (int j = 0; j < 5; j++)
    {
        cout<<arr[i][j]<<"  ";
    }
    cout <<"\n";

  }  
  cout<<"\n\n";
  max_row(arr);
  max_col(arr);
  top_bottom__bottom_top(arr);
  return 0;
}