#include <iostream>
#include <cmath>

typedef unsigned long long ll;

inline bool is_p(ll x) {
    if(x == 1) return false;
    if(x == 2 || x == 3) return true;
    if(x % 6 != 1 && x % 6 != 5) return false;

    for(register ll i = 5; i <= sqrt(x); i += 6) {
        if( x % i == 0 || x % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    register ll i, j;
    register ll n;

    std::cin >> n;

    for(i = n; i >= 0; -- i) {
        if(is_p(i)) {
            std::cout << i;
            return 0;
        }
    }
}
