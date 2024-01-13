#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++) {  
        cin >> arr[i];
    }

    int index = 0;
    while (n > 0) {
        for (int i = 0; i < 7; i++) {  
            n = n - arr[i];
            if (n <= 0) {
                index = i + 1;  
                break;
            }
        }
    }

    cout << index;

    return 0;
}
