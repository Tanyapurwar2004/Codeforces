#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    long long diff1 = ex - sx;
    long long diff2 = ey - sy;
    long long c1, c2, index = 0;
    char x, y;

    if (diff1 >= 0)
    {
        x = 'E';
        c1 = diff1;
    }
    else if (diff1 <= 0)
    {
        x = 'W';
        c1 = abs(diff1);
    }
    if (diff2 >= 0)
    {
        y = 'N';
        c2 = diff2;
    }
    else if (diff2 <= 0)
    {
        y = 'S';
        c2 = abs(diff2);
    }
    for (int i = 0; i < t; i++)
    {
        if (s[i] == x && c1 != 0)
        {
            c1--;
            index=i+1;
        }
        if (s[i] == y && c2 != 0)
        {
            c2--;
            index=i+1;
        }
        
    }

    if(c1==0 && c2==0){
        cout<<index;
    }
    else{
        cout<<"-1";
    }

    return 0;
}
