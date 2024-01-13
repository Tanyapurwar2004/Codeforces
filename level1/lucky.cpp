#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long c=0;
    long long temp=n;
    while(temp!=0){
        int digit=temp%10;
        temp=temp/10;
        if(digit == 4 || digit ==7){
            c++;
        }
    
    }
    if(c==7 || c==4){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}