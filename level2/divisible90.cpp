#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 5)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if (c1 >= 9 && c2 > 0)
    {
        int m = c1 - (c1 % 9);
        for (int i = 0; i < m; i++)
        {
            ans.push_back(5);
        }
        for (int i = 0; i < c2; i++)
        {
            ans.push_back(0);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
    }
    else if (c1 < 9 && c2 > 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}