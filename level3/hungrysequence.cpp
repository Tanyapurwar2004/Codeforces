#include <bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int c)
{
    bool is_prime[100000000];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= 100000000; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= 10000000; i += p) {
                is_prime[i] = false;
            }
        }
    }
    for (int i = 2; i <=100000000; i++) {
        if(c!=0){
        if (is_prime[i]) {
            cout << i << " ";
            c--;
        }
        }
        else{
            break;
        }
    }
}
 
int main(){
    long n;
    cin>>n;
    for(long i=n+1;i<=2*n;i++){
        cout<<i<<" ";
    }
    }
