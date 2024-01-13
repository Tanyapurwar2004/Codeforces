#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int c=0;
    while(n--){
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                c++;
                break;
            }
            if(s[i]=='-'){
                c--;
                break;
            }
            
        }
        
    }
    cout<<c;
}