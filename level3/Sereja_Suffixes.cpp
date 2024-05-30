// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }

//     map<ll, vector<ll>> mp;
//     for (int i = 0; i < n; i++)
//     {
//         mp[arr[i]].push_back(i);
//     }

//     // for (auto it : mp)
//     // {
//     //     for (int i = 0; i < it.second.size(); i++)
//     //     {
//     //         cout << it.second[i] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // cout<<endl;
//     while (m--)
//     {
//         int l;
//         cin >> l; // l=3
//         int c = 0;
//         for (auto it : mp)
//         {
//             for (int i = 0; i < it.second.size(); i++)
//             {   
//                 if (it.second[i] >= l-1)
//                 {   
//                     // cout<<it.second[i]<<" ";
//                     c++;
//                     break;
//                 }
                
                
//             }
//             // cout<<endl;
            
            
//         }
        
//         cout << c << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arrn;
    vector<long long> ans(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arrn.push_back(x);
    }

    set < int > sr;
          for (int j = n-1; j  >=0; j--)
        {
            sr.insert(arrn[j]); 
            ans[j]=sr.size();
        }

        

    while (m--)
    {
        int l;
        cin >> l;
        cout<<ans[l-1]<<"\n";

       
    }
}