#include <bits/stdc++.h>
#include <utility>
#include<unordered_map>
using namespace std;

bool reversecomp(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    else{
        return a.second<b.second;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> pairs;
    
    for (int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;
        pairs.push_back({p, t});
    }

    sort(pairs.begin(),pairs.end(),reversecomp);
    // reverse(pairs.begin(), pairs.end());
    // for(int i=0;i<n;i++){
    //     cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
    // }
    map<pair<int, int>, int > mp;
    for(auto it:pairs){
        mp[it]++;
    }
    // for(auto i:mp){
    //     cout<<i.first.first<<" "<<i.first.second<<"->"<<i.second<<endl;
    // }
    pair<int,int>target = {pairs[k-1].first,pairs[k-1].second};
    auto search= mp.find(target);
    if(search != mp.end()){
        cout<<search->second;
    }
}