#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int j=1;
   int c=0,c1=0,ct=0;
   while(j<n){
    for(int i=0;i<j;i++){
        if(arr[i]>=arr[j]){
            c++;
        }
        if(arr[i]<=arr[j]){
            c1++;
        }
    }
    j++;
    if(c1==0||c==0){
        ct++;
    }
    c=0;
    c1=0;
   }

   cout<<ct;
}