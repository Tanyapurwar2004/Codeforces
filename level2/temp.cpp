#include <bits/stdc++.h>
using namespace std;

void generateSubsequences(const vector<int>& arr, int index, int remaining, std::vector<int> current, std::vector<std::vector<int>>result) {
    if (remaining == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < arr.size(); ++i) {
        current.push_back(arr[i]);
        generateSubsequences(arr, i + 1, remaining - 1, current, result);
        current.pop_back();
    }
}

int main() {
    // Define the array
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Define the size of the subsequence
    int subsequenceSize = 4;

    // Vector to store the result
    std::vector<std::vector<int>> result;

    // Generate subsequences
    generateSubsequences(arr, 0, subsequenceSize, {}, result);

    // Display the result
    for (const auto& subsequence : result) {
        std::cout << "Subsequence: ";
        for (int element : subsequence) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
