#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<string> s1;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'W')
        {
            if (i >= n)
            {
                i = n;
                break;
            }
            if (s[i + 1] == 'U')
            {
                if (s[i + 2] == 'B')
                {
                    i = i + 3;
                }
                else
                {
                    s1.push_back(string(1, s[i]));
                    // s1.push_back(string(1, s[i + 2]));
                    if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
                    {
                        s1.push_back(" ");
                        i = i + 4;
                    }
                    else
                    {
                        i = i + 1;
                    }
                }
            }
            else
            {
                s1.push_back(string(1, s[i]));
                if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
                {
                    s1.push_back(" ");
                    i = i + 4;
                }
                else
                {
                    i++;
                }
            }
        }
        else
        {
            if (i > n)
            {
                i = n;
                break;
            }
            s1.push_back(string(1, s[i]));
            if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
            {
                s1.push_back(" ");
                i = i + 4;
            }
            else
            {
                i++;
            }
        }
    }

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
    }
}