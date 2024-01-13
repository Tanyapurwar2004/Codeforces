#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int first,second;
        cin>>first>>second;
        arr.push_back({first,second});
    }
    int c1=0,c0=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(arr[i].first==1){
            c1++;
        }
        else{
            c0++;
        }
         if(arr[i].second==1){
            c2++;
        }
        else{
            c3++;
        }
    }
    int x=0,y=0;
    if(c1>c0){
      x=c0;  
    }
    else{
        x=c1;
    }
    if(c2>c3){
        y=c3;
    }
    else{
        y=c2;
    }

    cout<<x+y;
}