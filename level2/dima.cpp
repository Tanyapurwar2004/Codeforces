#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s=s+arr[i];
    }
    int c=0;
    for(int i=1;i<=5;){
        s=s+1;
        // cout<<s;
        int y=s%(n+1);
        // cout<<y<<endl;
        if(y!=1){
            c++;
        }
            i++;
        
    }
    cout<<endl;
    cout<<c;
}