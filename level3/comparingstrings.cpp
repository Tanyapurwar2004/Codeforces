#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int flag = 0;
    if (s1.size() != s2.size())
    {
        cout << "NO";
    }
    
    else
    {   
        vector<int> ans;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                ans.push_back(i);
            }
        }
        int n = ans.size();
        if (ans.size() == 2)
        {
            if (s1[ans[0]] == s2[ans[n - 1]] && s1[ans[n-1]]==s2[ans[0]])
            {
                cout << "YES";
            }
            else{
                cout<<"NO";
            }
        }
        else
        {
            cout << "NO";
        }
    }
}