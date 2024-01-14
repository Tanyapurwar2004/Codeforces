#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int c=0;

    for(int i=0;i<n;i++){
        if(i>=a && n-i-1<=b){
            c++;
        }
    }
    cout<<c;
}