#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a=to_string(n);
    int x=a.size();
    int i=0;
    while(i<x){
        if(a[i]=='1'){
            if(i+1>=x){
                i=x;
                break;
            }
            if(a[i+1]=='1'){
                    i=i+1;
                    if(i+1>=x){
                        i=x;
                        break;
                    }
            }
            else if(a[i+1]=='4'){
                 if(i+2>=x){
                        i=x;
                        break;
                    }

                if(a[i+2]=='4'){
                    i=i+3;
                    
                    
                }
                else if(a[i+2]=='1'){
                    i=i+2;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
        else{
            break;
        }
    }
    if(i<x){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}