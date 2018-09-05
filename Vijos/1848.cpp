#include <iostream>

const int N = 10003;

int f[N];

int main() {
    int i, j;
    int n;

    std::cin >> n;

    for(i = 1; i <= n; ++ i) {
        for(j = 1; j <= i/2; ++ j) f[i] += f[j];
        ++ f[i];
    }

    std::cout << f[n];
}
