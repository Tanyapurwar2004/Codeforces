#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    reverse(s.begin(),s.end());
    // cout<<s;
    if(s==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}