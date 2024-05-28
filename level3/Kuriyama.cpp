#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    vector<long long int> u;
    for (int i = 0; i < n; i++)
    {
        u.push_back(v[i]);
    }
    sort(u.begin(), u.end());
    vector<long long int> prefix_sum(n + 1, 0);
    prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
        // cout<<prefix_sum[i]<<" ";
    }

    vector<long long int> prefix_sumu(n + 1, 0);
    prefix_sumu[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix_sumu[i] = prefix_sumu[i - 1] + u[i - 1];
    }
    long long int m;
    cin >> m;
    while (m--)
    {
        long long int type, l, r;
        cin >> type >> l >> r;
        long long  s = 0;
        if (type == 1)
        {
            s = prefix_sum[r] - prefix_sum[l - 1];
        }

        if (type == 2)
        {
            s = prefix_sumu[r] - prefix_sumu[l - 1];
        }
        cout << s << endl;
    }

    return 0;
}
