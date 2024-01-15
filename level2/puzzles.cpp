#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    vector<int>min; 
    sort(arr,arr+m);
    // Iterate through all possible starting indices
    for (int i = 0; i <= m - n; ++i) {
        // Create a vector to store the subarray
        vector<int> subarray;
        // Iterate through the subarray
        for (int j = i; j < i + n; ++j) {
            subarray.push_back(arr[j]);
        }

        // Display the subarray
        // std::cout << "Subarray " << i + 1 << ": ";
        for (int element : subarray) {
            // std::cout << element << " ";
            int maxx=*max_element(subarray.begin(),subarray.end());
            int minn=*min_element(subarray.begin(),subarray.end());
            min.push_back(maxx-minn);

        }

        
    }
        //     for(int i=0;i<min.size();i++){
        //     cout<<min[i];
        // }
     int mini=*min_element(min.begin(),min.end());
        // for(int i=0;i<subarray.size();i++){
        //     int maxx=*max_element(subarray.begin(),subarray.end());
        //     int minn=*min_element(subarray.begin(),subarray.end());
        //     min.push_back(maxx-minn);
        // }
        cout<<mini;
    return 0;
}