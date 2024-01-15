#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int c=0,idx=0;
    string s1="hello";
    int m=s1.size();
    for(int i=0;i<m;i++){
        for(int j=idx;j<n;j++){
            if(s[j]==s1[i]){
                c++;
                idx=j+1;
                break;
            }
        }
    }
    if(c==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}