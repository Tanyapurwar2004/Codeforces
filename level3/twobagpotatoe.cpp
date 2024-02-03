#include <bits/stdc++.h>
using namespace std;
int main(){
    long long y,k,n;
    cin>>y>>k>>n;
    vector<long long>arr;
    long long rem=y%k;
    int rest=k-rem;
    // for(long long i=1;i<=x;i++){
    //         if((i+y)%k==0){
    //             arr.push_back(i);
    //         }
    // }
    // if(arr.size()>0){
    // for(long long i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // }
    // else{
    //     cout<<"-1";
    // }
    int flag=0;
    if(rest+y<=n){
        flag=1;
        cout<<rest<<" ";
    }

    while(y+rest+k<=n){
            flag=1;
            cout<<rest+k<<" ";
            rest=rest+k;
    }
    if(flag==0){
        cout<<"-1";
    }
    return 0;


    
}