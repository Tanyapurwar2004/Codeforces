#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];

    if (n % 2 == 1) {
        cout << "-1" << endl;  // No perfect permutation for odd n
    } else {
        for (int i = 0; i <= n; i += 2) {
            arr[i]=i+2;
            arr[i+1]=i+1;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
    }

    return 0;
}
