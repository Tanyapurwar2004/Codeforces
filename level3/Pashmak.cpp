#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int maxx=*max_element(a.begin(),a.end());
    int minn=*min_element(a.begin(),a.end());
     long long int c1=0,c2=0;
    int max=maxx-minn;

    // for(int i=0;i<n;i++){ brute force
    //     for(int j=i;j<n;j++){
    //         if(abs(a[i]-a[j])==max){
    //             c++;
    //         }
    //     }
    // }
    
    for(int i=0;i<a.size();i++){
        if(a[i]==minn){
            c1++;
        }
        if(a[i]==maxx){
            c2++;
        }
    }
    if(max==0){
        long long int x=n-1;
      cout<<max<<" "<<(x*(x+1))/2;  
    }
    else{
    cout<<max<<" "<<c1*c2;
    }
}