#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_sort(vector<int> arr1, int n, vector<int> arr2, int m, vector<int> arr3)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        arr3.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
    return arr3;
}

vector<int> insert(vector<int> arr)
{ // insertion sort
    int n = arr.size(), j;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for (j = i; j > 0; j--)
        {
            if (arr[j - 1] > temp)
            {
                arr[j] = arr[j - 1];
            }
            else
            {
                break;
            }
        }
        arr[j] = temp;
    }
    return arr;
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    int n, temp, m;

    cout << "How many element you want in first array :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    { // first array input
        cout << "Enter element " << i + 1 << " :- ";
        cin >> temp;
        arr1.push_back(temp);
    }

    arr1 = insert(arr1); // calling sorting function to sort for first array

    cout << "How many element you want in second array :- "; // second array input
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "Enter element " << i + 1 << " :- ";
        cin >> temp;
        arr2.push_back(temp);
    }

    arr2 = insert(arr2); // calling sorting function to sort for second array

    arr3 = merge_sort(arr1, n, arr2, m, arr3);

    cout << "Sorted array:- ";
    for (int val : arr3)
    {
        cout << val << " ";
    }
    cout << endl;
    
}