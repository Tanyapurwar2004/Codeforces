#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,b;
    int max=*max_element(arr,arr+n);
    int min=*min_element(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            a=i;
            break;
        }
    }
     for(int i=0;i<n;i++){
       if(arr[i]==min){
            b=i;
        }
    }
   
    int x;
    if(a>b){
        x=a+(n-b-1)-1;
        cout<<x;
    }
    else{
        x=a+(n-b-1);
        cout<<x;
    }
}