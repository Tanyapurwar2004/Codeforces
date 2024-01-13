#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    vector<int>ans;
    while(i<n){
        if(s[i]=='.'){
            ans.push_back(0);
            i++;
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
             ans.push_back(1);
            }
            else if(s[i+1]=='-'){
                ans.push_back(2);
            }
            i+=2;
        }
    }
    for(auto it:ans){
        cout<<it;
    }
}