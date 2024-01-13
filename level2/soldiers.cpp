#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b=a[n-1];
    int c=a[0];
    int min=abs(b-c);
    int x=min;
    int i1,i2;
    for(int i=0;i<n;i++){
        int diff=abs(a[i]-a[i+1]);
        if(diff<min){
            min=diff;
            i1=i+1;
            i2=i+2;
        }
    }
    if(n==2){
        cout<<1<<" "<<2;
    }
    else if(x==min){
        cout<<n<<" "<<1;
    }
    else{
        cout<<i1<<" "<<i2;
    }
}