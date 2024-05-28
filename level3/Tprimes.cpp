#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];

// if number has exactly three divisor then it will be a perfect square of prime number .

bool isPrime(long long x)
{
    if (x <= 1)
    {
        return false;
    }
    if (x <= 3)
    {
        return true;
    }
    if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }
    for (long long i = 5; i * i <= x; i = i + 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        long long c = 0;
        // for(long long int i=1;i*i<=x;i++){
        //     if(x%i==0){
        //         if(x/i==i){
        //             c++;
        //         }
        //         else{
        //             c=c+2;
        //         }
        //     }
        // }
        long long root = sqrt(x);

        if (root * root == x && isPrime(root))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
