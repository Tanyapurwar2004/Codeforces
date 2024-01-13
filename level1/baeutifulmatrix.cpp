#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[5][5];
    // vector<int> b;
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                c=abs(i-2)+abs(j-2);
                // b.push_back(i);
                // b.push_back(j);
            }
        }
    }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
            
    //     }
    // }
    
    // for (int i = 0; i < b.size(); i++)
    // {
    //     c = abs(b[i] - 2) + c;
    // }

    cout << c;

    return 0;
}