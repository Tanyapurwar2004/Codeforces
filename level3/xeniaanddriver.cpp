#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<vector<int>>ans;
    int flag=0;
    for(int i=0;i<n;i++){
        vector<int>temp;
        if(a[i]==6){
            if(mp.find(1)!=mp.end() && mp[1]>0){
                if(mp.find(3)!=mp.end() && mp[3]>0){
                    mp[3]--;
                    mp[1]--;
                    mp[6]--;
                    temp.push_back(1);
                    temp.push_back(3);
                    temp.push_back(6);
                }
                else if(mp.find(2)!=mp.end() && mp[2]>0){
                    mp[2]--;
                    mp[1]--;
                    mp[6]--;
                    temp.push_back(1);
                    temp.push_back(2);
                    temp.push_back(6);
                }
                
               
            }
        }
        
         else if(a[i]==4){
            if(mp.find(1)!=mp.end() && mp[1]>0){
                if(mp.find(2)!=mp.end() && mp[2]>0){
                    mp[2]--;
                    mp[1]--;
                    mp[4]--;
                    temp.push_back(1);
                    temp.push_back(2);
                    temp.push_back(4);
                }
            }
        }
       if(temp.size()!=0){
        ans.push_back(temp);
       }
    }
    // cout<<ans.size();
    int x=n/3;
    if(ans.size()!=x || ans.size()==0){
        cout<<"-1";
    }
    else{for(auto it:ans){
        for(int i=0;i<it.size();i++){
            cout<<it[i]<<" ";
        }
        cout<<"\n";
    }
    }
    

 return 0;//tanya
}