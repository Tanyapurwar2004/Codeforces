#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int oddu = 0;
    int oddl = 0;
    int ans = 0;
    vector<pair<int, int>> p;
    int sx = 0, sy = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p.push_back({x, y});
        sx += x;
        sy += y;
    }
    // cout<<sx<<sy;
    if (sx % 2 == 0 && sy % 2 == 0)
    {
        cout << 0;
    }
    else if ((sx % 2 == 0 && sy % 2 != 0) || (sx % 2 != 0 && sy % 2 == 0))
    {
        cout << -1;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((p[i].first % 2 == 0 && p[i].second % 2 != 0) || (p[i].first % 2 != 0 && p[i].second % 2 == 0))
            {
                ans = 1;
                break;
            }
        }
        if(ans==1){
         cout << 1;
    }
    else{
         cout << -1;
    }
        
    }
    
}