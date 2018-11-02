#include <iostream>

typedef long long ll;
typedef unsigned long long ull;

const int MOD = 1000000007;

ull n, x, y, t;

inline void check(ull a) {
    if( a == 2 ) {
        x = 1;
        y = 1;
    } else {
        if( a % 2 == 0 ) {
            check( a / 2 );
            t = x * x + 2 * x * y;
            y = x * x + y * y;
            x = t;
        } else {
            check( a - 1 );
            t = x + y;
            y = x;
            x = t;
        }
    }
    x %= MOD;
    y %= MOD;

}

int main() {
    register int i, j;

    std::cin >> n;
    if( n == 1 ) {
        std::cout << 1;
    } else {
        check(n);
    }
    std::cout << x;

    return 0;
}
