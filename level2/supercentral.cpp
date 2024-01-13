#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        ans.push_back({x, y});
    }
    int c = 0, c1=0, c2=0, c3=0, c4=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ans[j].first > ans[i].first && ans[j].second == ans[i].second)
            {
                c1++;
            }

            if (ans[j].first < ans[i].first && ans[j].second == ans[i].second)
            {
                c2++;
            }

            if (ans[j].first == ans[i].first && ans[j].second > ans[i].second)
            {
                c3++;
            }
            if (ans[j].first == ans[i].first && ans[j].second < ans[i].second)
            {
                c4++;
            }
            // cout << c1 << c2 << c3 << c4 << endl;
        }
        if (c1 >= 1 && c2 >= 1 && c3 >= 1 && c4 >= 1)
        {
            c++;
        }
        c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    }

    cout << c;
}