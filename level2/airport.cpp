#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x=n;
    vector<int> arr;
   
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
     vector<int>arr1=arr;
    sort(arr.begin(), arr.end(), greater<int>());
    
    int maxc = 0, i = 0, min = 0, j = 0;
    while (n != 0)
    {
        maxc = maxc + arr[i];
        // cout<<max<<" ";
        arr[i] = arr[i] - 1;
        // cout<<endl;
        // cout<<arr[i];
        sort(arr.begin(), arr.end(), greater<int>());
        if (arr[i] < arr[i + 1] || arr[i]==0)
        {   
            i++;
            if (i+1 >= m)
            {
                i = 0;
            }
        }

        n--;
        // cout<<n;
    }
    sort(arr1.begin(), arr1.end());
    
    while (x != 0)
    {
        min = min + arr1[j];
        // cout<<s;
        arr1[j] = arr1[j] - 1;
        // cout<<arr[i];
        if (arr1[j] == 0)
        {
            j++;
            
        }

        x--;
    }
    cout << maxc << " " << min;
}