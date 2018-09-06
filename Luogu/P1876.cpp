#include <iostream>
#include <cmath>

int main() {
    register int i, j;
    register int n;

    std::cin >> n;

    for(i = 1; i <= sqrt(n); std::cout << i * i << ' ', ++ i);

    return 0;
}
