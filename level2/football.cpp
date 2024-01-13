#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     string s;
     vector<string> ans;

     // Input strings into the vector
     unordered_map<string,int>mp;
     for (int i = 0; i < n; i++)
     {
          cin >> s;
          mp[s]++;
     }
     int maxi=INT_MIN;
     for(auto it:mp){
       c1=it.second;
       maxi=max(maxi,c1);
     }
     


     // Sort the vector
     // sort(ans.begin(), ans.end());

     // int c1 = 1;

     // // Loop through the sorted vector
     // for (int i = 0; i < ans.size(); i++)
     // {
     //      if (ans[i] == ans[i + 1])
     //      {
     //           c1++;
     //      }
     //      else
     //      {
     //           break;
     //      }

     //      //    cout<<ans[i]<<" ";
     // }
     // int c2 = n - c1;
     // if (c1 > c2)
     // {
     //      cout << ans[0];
     // }
     // else
     // {
     //      cout << ans[c1];
     // }

     return 0;
}
