#include <iostream>
#include <cmath>
#include <iomanip>

const int PI = 3.14159;

int main() {
    register int i, j;
    int R;
    double ans;

    std::cin >> R;
    ans = 0.5 * sin( 2 * PI / 17 ) * 17 * R * R;

    std::cout << std::fixed << std::setprecision(6) << ans;
}
