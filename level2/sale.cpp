#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // vector<int>ans;
    // for(int i=0;i<n;i++){
    //     if(a[i]<0){
    //         ans.push_back(abs(a[i]));
    //     }
    // }
    // int s=0;
    // int t=m;
    // // vector<int>result;
    // if(ans.size()<m){
    //     int c1=m-ans.size();
    //     for(int i=0;i<c1;i++){
    //         ans.push_back(0);
    //     } 
    //     for(int i=0;i<ans.size();i++){
    //         s=s+ans[i];
    //     } 
    //     cout<<abs(s);
    // }
    
    // else{
    //     while(t--){
    //     int max=*max_element(ans.begin(),ans.end());
    //     s=s+max;
    //     ans.erase(find(ans.begin(),ans.end(),max));
    
    // }
    // cout<<abs(s);
    
    // }

    
    
    

    return 0;
}