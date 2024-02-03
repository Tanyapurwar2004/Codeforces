#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int c[n], w[m];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    vector<int> arr;
    int maxi = *max_element(c, c + n);
    int mini = *min_element(w, w + m);
    if (mini > maxi)
    {
        for (int v = maxi; v < mini; v++)
        {
            for (int i = 0; i < n; i++)
            {
                if (c[i] * 2 <= v)
                {
                    arr.push_back(v);
                }
            }
        }
        if (arr.size() != 0)
        {
            int minn = *min_element(arr.begin(), arr.end());
            cout << minn;
        }
        else
        {
            cout << "-1";
        }
    }
    else
    {
        cout << "-1";
    }
}