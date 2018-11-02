#include <iostream>
#include <string>

unsigned long long f[10005];

const int N = 10003;



int main() {
    register int i, j;
    register int n, m;

    f[1] = f[2] = 1;

    std::cin >> n;
    for (i = 3; i <= 10003; ++ i) {
        f[i] = f[i - 1] + f[i - 2];
    }

    std::cout << f[n + 1];

    return 0;
}