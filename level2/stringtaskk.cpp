#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<string> ans;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'E' || s[i] == 'e' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'U' || s[i] == 'u' || s[i] == 'I' || s[i] == 'i')
        {
            i++;
        }
        else{
            ans.push_back(".");
            ans.push_back(string(1,(char)tolower(s[i])));
            i++;

        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}