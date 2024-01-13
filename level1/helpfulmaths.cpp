#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    // if (n==1){
    //     cout<<s;
    // }
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c1++;
        }
        if(s[i]=='2'){
            c2++;
        }
        if(s[i]=='3'){
            c3++;
        }
    }
    vector<string>ans;
    for(int i=0;i<c1;i++){
        ans.push_back("1");
        ans.push_back("+");
    }
     for(int i=c1*2;i<c2+c1*2;i++){
        ans.push_back("2");
        ans.push_back("+");
    }
     for(int i=c2*2;i<c3+c2*2;i++){
        ans.push_back("3");
        ans.push_back("+");
    }
    int m=ans.size();
    ans.pop_back();
     for(int i=0;i<ans.size();i++){
       cout<<ans[i];
    }
}