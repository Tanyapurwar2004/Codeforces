#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = 0;
    for (long long a = 1; a <= n; ++a) {
        for (long long b = a; b <= n; ++b) {
            long long c_square = a * a + b * b;
            long long c = sqrt(c_square);
            if (c * c == c_square && c <= n) {
                ++sum;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
