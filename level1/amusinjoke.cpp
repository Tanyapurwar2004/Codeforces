#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    string s;
    int n = s1.size();
    int m = s2.size();
    int a = s3.size();
    s=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s.begin(),s.end());
    if(s3==s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
