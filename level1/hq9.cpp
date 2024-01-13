#include <iostream>
#include <string>

int main() {
    std::string p;
    std::cin >> p;
    int n = p.size();
    int c=0;
    
    for (int i = 0; i < n; i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            std::cout << "YES";
            return 0; 
        } else if (p[i] == '+') {
            c++;
        }
    }
    
    std::cout << "NO"; 
    return 0;
}
