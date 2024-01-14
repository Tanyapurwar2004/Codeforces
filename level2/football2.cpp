#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int>count;
    int c=1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            count.push_back(c);
            c=1;
        }
    }
    int c1=0;
    for(int i=0;i<count.size();i++){
        // cout<<count[i];
        if(count[i]>=7){
            c1++;
        }
    }
    if(c1>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}