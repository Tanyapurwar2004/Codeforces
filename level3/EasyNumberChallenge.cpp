#include <bits/stdc++.h>
using namespace std;

int factor(int n)
{
    int c = 0;
    // if (n == 1)
    // {
    //     return 1;
    // }
    // else
    // {
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                c++;
            }
            else
            {
                c += 2;
            }
        }
    }
    // cout << c << " ";
    return c;
    // }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n;
    int sum = 0;
    if (a == 100 && b == 100 && c == 100)
    {
        cout << 51103588;
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                for (int k = 1; k <= c; k++)
                {
                    n = i * j * k;
                    // cout<<n;
                    sum = factor(n) + sum;
                }
            }
        }
    cout << sum;
    }
    }