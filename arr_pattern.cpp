#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, max = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        cout << " " << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= max; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < i)
            {
                cout << "   ";
                if (arr[j] >= 10)
                {
                    cout << " ";
                }
            }
            else
            {
                cout << " * ";
                if (arr[j] >= 10)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}