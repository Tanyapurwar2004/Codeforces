#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int td=k*l;
    int ts=c*d;
    int ct=0;
    int t1=n*nl;
    int s1=n*1;
    int p1=n*np;
    while(td>=t1&&ts>=s1&&p>=p1){
        td=td-t1;
        ts=ts-s1;
        p=p-p1;
        ct++;
    }
    cout<<ct;

}
