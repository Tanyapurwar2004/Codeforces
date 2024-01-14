#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>s>>n;
    int x[n],y[n],a,b;
    for(int i=0;i<n;i++){
            cin>>a;
            cin>>b;
            x[i]=a;
            y[i]=b;
    }
    int c=0;
        for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(x[i]>x[j])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
                int p=y[i];
                y[i]=y[j];
                y[j]=p;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(x[i]<s){
            s=s+y[i];
        }
        else{
            c++;
            break;
        }
    }
    if(c>=1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}