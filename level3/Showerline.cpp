#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int g[6][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>g[i][j];
    }
    }
    int p[6];
    for(int i=0;i<n;i++){
        p[i]=i;
    }
    int tmp=0,ans=-1,pans[n];
    do{
        tmp=g[p[0]][p[1]]+g[p[1]][p[0]]+g[p[2]][p[3]]+g[p[3]][p[2]];
        tmp+=g[p[1]][p[2]]+g[p[2]][p[1]]+g[p[3]][p[4]]+g[p[4]][p[3]];
        tmp+=g[p[2]][p[3]]+g[p[3]][p[2]];
        tmp+=g[p[3]][p[4]]+g[p[4]][p[3]];

        if(tmp>ans){
            ans=tmp;
            for(int i=0;i<n;i++){
            pans[i]=p[i];
        }
        }
        
    }while(next_permutation(p,p+n));

    cout<<ans;

}