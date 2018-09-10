#include <iostream>

int main() {
    register int n, a, b, c, d, e, f;

    std::cin >> n;
    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << n - (a + b + c - d - e - f);

    return 0;
}
