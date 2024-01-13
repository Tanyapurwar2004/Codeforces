#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // mp[a[i]]++;
    }
    int min = INT_MAX;
    int c = 0;
    int index = 0;
    int minn = *min_element(a,a+n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == minn)
            {
                c++;
            }
        }
        if(c==1){
            for (int i = 0; i < n; i++)
            {
                if(a[i]<min){
                     min = a[i];
                index = i + 1;
                }
            }
            cout<<index;
            
        }
        else{
            cout<<"Still Rozdil";
        }
        
    
}