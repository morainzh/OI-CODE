#include <iostream>
typedef long long ll;

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    register ll n;

    register ll f[5];

    std::cin >> n;

    f[1] = 1;
    f[2] = 1;

    for(register ll i = 3; i <= n + 1; ++ i) {
        f[i % 3] = f[(i - 1) % 3] + f[(i - 2) % 3];
    }

    std::cout << f[(n - 1) % 3] * f[(n + 1) % 3] - f[n % 3] * f[n % 3];

    return 0;
}
