#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int c=0;
    int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i] ;
    }
    if (a[0] == 25)
    {
        int s = 25;
        long long int c25=1,c50=0;
        for (long long int i = 1; i < n; i++)
        {
            if (a[i] == 25)
            {
                c25++;
            }
            // cout<<c25;
            else if (a[i]==50 && c25>0)
            {
                c25--;
                c50++;
            }
            else if(a[i]==100 && (c25>0 && c50>0)){
                c25--;
                c50--;
            }
            else if(a[i]==100 &&  c25>=3){
                c25=c25-3;
              
            }
            else
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}