#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    long long int s=0;
    s = arr[0] - 1;
    // cout << s << endl;
    int diff=0,x=0;
    for (int i = 0; i < m-1; i++)
    {   
        diff = arr[i + 1] - arr[i];
        // cout << diff << endl;
        x = n - abs(diff);
        // cout << x << endl;
        
        if (diff >= 0)
        {
            s =s+ diff;
        }
        else
        {
            s =s+ x;
        }
        // cout<<s<<endl;
    }
    cout << s;
}