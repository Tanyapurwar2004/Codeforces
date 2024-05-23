#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxSubsequenceLength(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_map<int, int> remainderToIndex;
    remainderToIndex[0] = -1; // Initialize with 0 remainder at index -1
    int maxLength = 1; // Initialize maxLength to 1 instead of 0
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum = (sum + arr[i]) % k;
        
        if (remainderToIndex.find(sum) != remainderToIndex.end()) {
            int length = i - remainderToIndex[sum] + 1; // Adding 1 to include the current element
            if (length > maxLength && length > 1) {
                maxLength = length;
            }
        } else {
            remainderToIndex[sum] = i;
        }
    }

    if (maxLength == 1 && sum == 0) {
        return n; // If the entire array is a valid subsequence, return its length
    }

    if (sum == 0) {
        return n; // If the sum of entire array is divisible by k, return n
    }

    return maxLength;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxLength = maxSubsequenceLength(arr, k);
    cout << maxLength << endl;

    return 0;
}
