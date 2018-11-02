#include <iostream>

int main() {
    register long long i, j;
    long long ans, m, n, b, p;

    std::cin >> b >> m >> p;
    printf("%lld^%lld mod %lld=",b,m,p);
    std::cout << b << '^' << m << " mod " << p << '=';
    while(m > 0) {
        if (m % 2 == 1) ans = ans * b % p;
        b = b * b % p;
        m = m >> 1;
    }

    std::cout << ans % p << ' ';

}