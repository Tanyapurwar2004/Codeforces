#include <bits/stdc++.h>
using namespace std;

int main(){
    int ip[3][3];
    int op[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ip[i][j];
            op[i][j]=1;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(ip[i][j]%2!=0){
                op[i][j]=op[i][j]^1;
                // cout<<op[i][j];
                if(i-1>=0){
                    op[i-1][j]^=1;
                }
                if( i+1<3){
                    op[i+1][j]^=1;
                }
                if(j-1>=0){
                    op[i][j-1]^=1;
                }
                if(j+1<3){
                    op[i][j+1]^=1;
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<op[i][j];
        }
        cout<<"\n";
    }
}