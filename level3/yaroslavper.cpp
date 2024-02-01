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

    for(int i=0;i<n;i++){
        if(n%2==0 && mp[a[i]]>n/2){
            cout<<"NO";
            return 0;
        }
        if(n%2!=0 && mp[a[i]]>(n/2)+1){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
}