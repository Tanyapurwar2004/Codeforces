#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
        }
            int c=0,ct=0;
        for(int i=0;i<n;i++){
            if(a[i][0]==1){
                c++;
            }
            if(a[i][1]==1){
                c++;
            }
            if(a[i][2]==1){
                c++;
            }
           if(c>=2){
            ct++;
           }  
           c=0;  
        }
        cout<<ct;
}