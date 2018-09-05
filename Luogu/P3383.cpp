#include <iostream>
#include <cmath>

inline bool is_p(int x) {
    if(x == 1) return false;
    if(x == 2 || x == 3) return true;
    if(x % 6 != 1 && x % 6 != 5) return false;

    for(int i = 5; i <= sqrt(x); i += 6) {
        if( x % i == 0 || x % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i, j;
    int n, m, x;

    std::cin >> n >> m;
    for(i = 1; i <= m; ++ i) {
        std::cin >> x;
        if(is_p(x)) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }
    }
}
