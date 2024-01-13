#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;

    vector<string> ans;
    string s;
    while (m--)
    {

        cin >> s;
        int n = s.size();
         if (n <= 10)
        {
            cout << s;
            cout<<endl;
        }
       else
        {
            ans.push_back(string(1, s[0]));
            ans.push_back(to_string(n - 2));
            ans.push_back(string(1, s[n - 1]));
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i];
            }
            
            ans.pop_back();
            ans.pop_back();
            ans.pop_back();
            cout << endl;
        }
       
    }
}