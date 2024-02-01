#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int maxx=INT_MIN;
    int minn=INT_MAX;

  for(int i=0;i<n;i++){
        if(a[i][1]>maxx){
            maxx=a[i][1];
        }
        if(a[i][0]<minn){
            minn=a[i][0];
        }
  }
    // cout<<minn<<" "<<maxx;
    int index=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i][0]==minn && a[i][1]==maxx){
            index=i+1;
        }
    }
    if(index==0){
        cout<<"-1";
    }
    else{
        cout<<index;
    }
}