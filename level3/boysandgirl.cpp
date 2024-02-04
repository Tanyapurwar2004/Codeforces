#include<bits/stdc++.h>

using namespace std;

int main() {
      
    size_t n, m;
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);

    // Read input
    cin >> n >> m;

    // Process input and generate output
    string s;
    
  

 if (n >= m) {
        while (n != 0 && m != 0) {
            s.push_back('B');
            s.push_back('G');
            n--;
            m--;
        }
    } else {
        while (n != 0 && m != 0) {
            s.push_back('G');
            s.push_back('B');
            n--;
            m--;
        }
    }

    while (n > 0) {
        s.push_back('B');
        n--;
    }

    while (m > 0) {
        s.push_back('G');
        m--;
    }

    cout<<s;

    return 0;
}
