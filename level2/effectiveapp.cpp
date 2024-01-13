#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    // scanf("%d" , &n);
    // int arr[n];
    // for(int i=1;i<=n;i++){
    //     scanf("%d" , &arr[i]);
    // }
    // int m;
    // scanf("%d" , &m);;
    // int quer[m];
    // for(int i=1;i<=m;i++){
    //     scanf("%d" , &quer[i]);
    // }
    // long long int c1=0,c2=0;
    // int j=1;
    // while(j<=m){
    //     for(int i=1;i<=n;i++){
    //         if(quer[j]==arr[i]){
    //             c1+=i;
    //             c2+=n-i+1;
    //         }
           
    //     }
    //     for(int i=n-1;i>=0;i--){
    //         if(quer[j]!=arr[i]){
    //             c2++;
    //         }
    //         else{
    //             c2++;
    //             break;
    //         }
    //     }
    //     j++;
    // }
    // printf("%I64d %I64d\n", c1, c2);
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]=i;
    }
    int m;
    cin>>m;
    long long int c1=0,c2=0;
    while(m--){
        int y;
        cin>>y;
        if(mp.find(y)!=mp.end()){
            c1+=mp[y];
            c2+=n-mp[y]+1;
        }
    }
    cout<<c1<<" "<<c2;

    }
