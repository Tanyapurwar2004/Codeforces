#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int C = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            C++;
        }
        else
        {
            c++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (C > c)
        {

            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
        }
        if (c >= C){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }

    cout<<s;
}