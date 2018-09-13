#include <iostream>
#include <cmath>

typedef long long ll;

inline ll ppow(ll x, ll y) {
    for(ll i = 1; i <= y; ++ i) x *= y;
    return x;
}

int main() {
    register ll i, j;
    register ll n;

    std::cin >> n;

    ll ans = (ppow( (1 + sqrt(5)) / 2, n) - ppow( (1 - sqrt(5)) / 2, n) ) / sqrt(5);

    std::cout << ans + 1;

    return 0;
}
