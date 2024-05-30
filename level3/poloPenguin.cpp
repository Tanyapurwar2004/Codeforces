#include <bits/stdc++.h>
#include <utility>
#include<unordered_map>
using namespace std;
 
int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    int arr[n][m];
    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        v.push_back(arr[i][j]);
    }
    }
    int k=v.size();
    int s=0;
    int e=(k)-1;
    int mid=s+(e-s)/2;
    int c=0;
    // cout<<k; 
    sort(v.begin(),v.end());
    // for(int i=0;i<n*m;i++){
    //     cout<<v[i];
    // }
    int flag=1;

    for(int i=1;i<v.size();i++){
         if(v[i-1]%d!=(v[i])%d){
            flag=0;
            break;
        }
    }
    // cout<<flag;
    for(int i=0;i<k;i++){
            if(i<mid){
                int a=(v[mid]-v[mid-i-1])/d;
                int b=v[mid]-v[mid-i-1];
                for(int j=0;j<mid-i;j++){
                    v[j]=v[j]+b;
                    c=c+a;
                }
                    
            }
            else if(i==mid){
                continue;
            }
            else{
                int a=(v[i]-v[mid])/d;
                int b=v[i]-v[mid];
                for(int j=i;j<k;j++){
                    v[j]=v[j]-b;
                    c=c+a;//:(
                }
                    
            }
            }
        

        if(flag==0){
            cout<<-1<<"\n";
        }
        else{
        cout<<c<<"\n";
        }
        return 0;
    }
   
