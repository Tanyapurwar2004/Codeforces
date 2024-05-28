#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4;
    char m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    int c1 = 0, c2 = 0,c=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    // cout<<c1<<c2;

    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }
    c1 = 0;
    c2 = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 2; j < 4; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;
        for (int i = 1; i < 3; i++)
    {
        for (int j = 2; j < 4; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;
        for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;
        for (int i = 2; i < 4; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }

    c1 = 0;
    c2 = 0;
        for (int i = 2; i < 4; i++)
    {
        for (int j = 2; j < 4; j++)
        {
            if (m[i][j] == '#')
            {
                c1++;
            }
            if (m[i][j] == '.')
            {
                c2++;
            }
        }
    }
    if (c1 == 4 || c2 == 4 || c1 == 3 || c2 == 3)
    {
        c++;
    }
    if(c!=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
