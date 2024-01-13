#include <bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin>>s;
     int n=s.size();
    set<char>ans(s.begin(),s.end());
    int m=ans.size();
    if(m%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
     
}