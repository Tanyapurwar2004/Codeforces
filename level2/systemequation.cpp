#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int b=0;b<=n;b++){
        for(int a=0;a<=m;a++){
            if(((a*a)+b==n)&&(a+(b*b)==m)){
                c++;
            }
        }
    }
    cout<<c;
}