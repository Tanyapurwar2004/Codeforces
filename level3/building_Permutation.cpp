#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<long long int> a;
    for(long long int i=0;i<n;i++){
        long long int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    long long int c=0;
    for(long long int i=0;i<n;i++){
        c=c+abs(i+1-(a[i]));
    }

    cout<<c;
    return 0;
}
