#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    for (int i = x + 1; i <= 9013; i++)
    {
        int n = i;
        int a = n % 10;
        n = n / 10;
        int b = n % 10;
        n = n / 10;
        int c = n % 10;
        n = n / 10;
        int d = n;
        if (a != b && b != c && c != d && a != d && c != a && b != d)
        {
            cout << i;
            break;
        }
    }
}