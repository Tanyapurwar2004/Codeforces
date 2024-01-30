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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int x=sum/2;
    if(mp[100]>0 && mp[200]>0){
    if(x%100==0){
        cout<<"YES";   
    }
    else{
        cout<<"NO";
    }
    }
    else if(mp[100]==0 && mp[200]>0){
        if(n%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else if(mp[100]>0 && mp[200]==0){
        if(n%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}