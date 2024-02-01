#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans;

    ans.push_back({0});

    for(int i=1;i<n;i++){
        vector<int>temp((2*i)+1);
        for(int j=1;j<temp.size()-1;j++){
            if(j<=i){
                temp[j]=j;
            }
            else{
                temp[j]=temp[j-1]-1;
            }
        }
        ans.push_back(temp);
    }

    for(auto it:ans){
        ans.push_back(it);
        cout<<"\n";
    }
}