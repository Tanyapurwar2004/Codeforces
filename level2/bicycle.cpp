#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>ratio;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(b[j]%a[i]==0){
                ratio.push_back(b[j]/a[i]);
                break;
            }
        }
    }
    int max=*max_element(ratio.begin(),ratio.end());
    // cout<<max<<"\n";
    long long int c=count(ratio.begin(),ratio.end(),max);
 
    cout<<c;
 
}