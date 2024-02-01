#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX, index = 0, sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }

    min = sum;
    index = 1;
    for (int i = 1; i <= n - k; i++)
    {
        sum = sum - a[i - 1];
        sum = sum + a[i + k - 1];
        if (sum < min)
        {
            min = sum;
            index = i + 1;
        }
    }
    cout << index;
}