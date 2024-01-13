#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[12];
    for(int i=0;i<12;i++){
        cin>>a[i];
    } 
    int index=0,s=0;
    sort(a,a+12,greater<int>());
    
    int c=0;
    for(int i=0;i<12;i++){
         s=s+a[i];
        if(s>=n){
            index=i;
            break;
        } 
        c++;  
    }
    // cout<<c;
    if(n==0){
        cout<<"0";
    }
    else if(c==12&&s<n){
        cout<<"-1";
    }
    else{
        cout<<index+1;
    }
    
    
    
}
