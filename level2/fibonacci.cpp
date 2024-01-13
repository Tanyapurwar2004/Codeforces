#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);

    int i = 2;
    while (arr[i-1]<n)
    {
        arr.push_back(arr[i - 1] + arr[i - 2]);
        i++;
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i];
    // }

    int j = 0;

    // Find the index j such that arr[j] equals or exceeds n
    while (j <= n + 2 && arr[j] < n)
    {
        j++;
    }

    if (j <= n + 2 && arr[j] == n)
    {
        // Check if arr[j] is equal to n
        if (n == 2)
        {
            cout << "0 1 1" << endl;
        }
        else if (n == 1)
        {
            cout << "0 1 0" << endl;
        }
        else if (n == 0)
        {
            cout << "0 0 0" << endl;
        }
        else if (n >= 3)
        {
            cout << arr[j - 2] << " " << arr[j - 3] << " " << arr[j - 2] << endl;
        }
    }
    else
    {
        cout << "I'm too stupid to solve this problem" << endl;
    }

    return 0;
}
