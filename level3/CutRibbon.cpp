#include<bits/stdc++.h>

using namespace std;


int main() {
    int n,a,b,c;

    int i,j,k,ans,rem;
    while(cin>>n>>a>>b>>c){
        ans=0;
        for(int i=0;i*a<=n;i++){
            for(j=0;j*b+i*a<=n;j++){
                rem=n-(j*b+i*a);

                if(rem%c==0){
                    k=rem/c;
                    ans=max(ans, i+j+k);
                }
            }
        }
        cout<<ans;

    }

    return 0;
}
