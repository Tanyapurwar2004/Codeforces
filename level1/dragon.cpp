#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    cout<<endl;
    int l;
    cin>>l;
    cout<<endl;
    int m;
    cin>>m;
    cout<<endl;
    int n;
    cin>>n;
    cout<<endl;
    int d;
    cin>>d;
    int c=0;
    for(int i=1;i<=d;i++){
        if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0)){
            c++;
        }
        
    }
    cout<<c;
    // cout<<d-c;
}