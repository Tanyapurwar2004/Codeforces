#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x[i]=a;
        y[i]=b;
    }

    int r[n-1];

    for(int i=0;i<n-1;i++){
        if(i!=0){
            r[i]=r[i-1]-x[i+1]+y[i+1];
            
        }
        else{
            r[i]=y[i]-x[i+1]+y[i+1];
        }
    }
    int maxx=y[0];
    for(int i=0;i<n-1;i++){
        if(r[i]>maxx){
            maxx=r[i];
        }
    }
   

    

    cout<<maxx;

    return 0;
   

}