#include <bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int c=1,l=k-1;
for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
        c++;
    }
    else{
        c=1;
    }
}
if(c!=1 && ((l>=n-c) &&(l<=n))){
    cout<<n-c;
}
else if(c==1 && (l==n-1)){
    cout<<n-1;
}
else{
    cout<<"-1";
}


return 0;
}
