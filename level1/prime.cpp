#include <bits/stdc++.h>
using namespace std;
vector<int>ans;
bool prime(int a){
    if(a==1 || a==0){
        return false;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(prime(i)){
        ans.push_back(i);
        }
    }
    //  for(int i=0;i<ans.size();i++){
    //     cout<<ans[i];
    //  }
    if(ans[1]==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}