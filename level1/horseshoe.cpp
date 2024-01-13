#include <bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    vector<int>ans;
    int c=0;
        ans.push_back(s1);
        ans.push_back(s2);
        ans.push_back(s3);
        ans.push_back(s4);
        int n=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(ans[i]==ans[i+1]){
                c++;
            }
        }
        cout<<c;
}