#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int c1=0,c2=0;
    int a[n],b[n];
    int j=n;
    for(int i=0;i<n;i++){
        a[i]=s[i]-'0';
        b[i]=s[j++]-'0';
    }
    sort(a,a+n);
    sort(b,b+n);

    for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                c1++;
            }
            if(b[i]>a[i]){
                c2++;
            }
    }

    if(c1==n || c2==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

}