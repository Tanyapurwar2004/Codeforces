#include<bits/stdc++.h>
using namespace std;

int main()
{ 
int n;
cin>>n;
int c1=0,c2=0,maxx=-1;
while(n--){
    int a;
    cin>>a;

    if(a==1){
        c1++;
        if(c2>0){
            c2--;
        }
    }
    else{
        c2++;
        maxx=max(maxx,c2);
    }
}

 cout<<c1+maxx<<endl;
}