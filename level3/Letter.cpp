#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    map<char,int>mp;
    map<char,int>mp1;
    for(char c:s){
        if(c!=' '){
            mp[c]++;
        }
        
    }    
    for(char c1:s1){
        if(c1!=' '){
            mp1[c1]++;
        }
    }
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second;
    // }
    // cout<<"\n";
    // for(auto it:mp1){
    //     cout<<it.first<<" "<<it.second;
    // }
    int flag=0;
    for(int i=0;i<s1.size();i++){
        if(mp.find(s1[i])!=mp.end() && mp[s1[i]]>0){
            mp[s1[i]]--;
            mp1[s1[i]]--;
        }
        else{
            flag=1;
        }
    }
    int flag1=0;
    for(auto it:mp1){
        if(it.second!=0){
            flag1=1;
        }
        // cout<<it.second;
    }
    if(flag1==1 && flag == 1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}