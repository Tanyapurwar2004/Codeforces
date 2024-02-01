#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    

    int m=s.size();
    int flag=0;
    for(int i=0;i<m;i++){
        if(s[i]=='0'){
            flag=1;
            s.erase(i,1);
            break;
        }
    }
    if(flag==0){
        s.erase(m-1,1);
    }
    
    cout<<s;
}