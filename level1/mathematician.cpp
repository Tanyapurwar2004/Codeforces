#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    string m;
    cin>>n>>m;
    int l=n.size();
    string s;
    for(int i=0;i<l;i++){
        if(n[i]==m[i]){
            s.push_back('0');
        }
        else{
            s.push_back('1');
        }
    }

    cout<<s;
}