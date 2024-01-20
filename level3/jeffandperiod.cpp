#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    int c = 0, c1 = 0;
    map<int, int> ans;
    int diff = 0,flag=0;
    for (auto it : mp)
    {
        if (it.second.size() == 1)
        {
            c1++;
            ans[it.first] = 0;
        }
        else if (it.second.size() == 2)
        {
            c1++;
            ans[it.first] = it.second[1] - it.second[0];
        }
        else
        {
            for (int i = 0; i < it.second.size() - 2; i++)
            {
                diff = it.second[i + 1] - it.second[i];
                if (it.second[i + 1] - it.second[i] != it.second[i + 2] - it.second[i + 1])
                {
                    flag=1;
                    break;
                }
                // cout<<c;
            }
            if (flag==0)
            {
                c1++;
                ans[it.first] = diff;
                // cout<<"nitin";
            }
            flag=0;
        }
    }
    cout << ans.size() << "\n";
    for (auto it : ans)
    {
        cout << it.first << " " << it.second<<"\n";
    }
}