#include <bits/stdc++.h>
#include <utility>
#include<unordered_map>
using namespace std;
 
// bool reversecomp(pair<int,int>a, pair<int,int>b){
//     if(a.first!=b.first){
//         return a.first>b.first;
//     }
//     else{
//         return a.second<b.second;
//     }
// }
 
int main()
{
    int n;
    cin >> n ;
    vector<pair<int, int>> pairs;
    
    for (int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;
        pairs.push_back({p, t});
    }

    map<pair<int, int>, int > mp;
    for(auto it:pairs){
        mp[it]++;
    }
    int c=1;
    for(auto i:mp){
        // cout<<i.second<<endl;
        if(i.second>1){
            c=c+(i.second-1);
        }
    }

    cout<<c<<endl;
   
}