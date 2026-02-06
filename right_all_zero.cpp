// shifting all zeros towords the right side
#include <iostream>
#include <vector>
using namespace std;

vector<int> right_side_zero(vector<int> arr)
{
    int n = arr.size() - 1;
    int i = 0;

    while (i < n)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[n]);
            n--; // Don't increment i here, as the swapped value at arr[i] needs checking
        }
        else
        {
            i++;
        }
    }
    return arr;
}


int main()
{
    vector<int> arr;
    int n, temp;
    cout << " How much you want to input: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. " << i + 1 << " :- ";
        cin >> temp;
        arr.push_back(temp);
    }
    cout << endl;

    cout << "Input array:- ";
    for(int i:arr){
        cout << i<<" ";
    }
    cout << endl;

    arr=right_side_zero(arr);

    cout << "Zero shifted array:- ";
    for(int i:arr){
        cout << i<<" ";
    }
    cout << endl;
    return 0;
}