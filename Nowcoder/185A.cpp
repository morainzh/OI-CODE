#include <iostream>

typedef long long ll;

int main() {
    register int i, j;
    register ll n;

    std::cin >> n;
    n *= 2;
    std::cout << n * (n + 1) / 2 + 1;

    return 0;
}
