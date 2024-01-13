#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    double a, b, c;

    a = sqrt((double)(a1 * a3) / a2);
    b = a * (double)a2 / a3;
    c = b * (double)a3 / a1;

    cout << fixed << setprecision(0);
    // cout << a << " " << b << " " << c << endl;
    cout << 4 * (a + b + c);

    return 0;
}
