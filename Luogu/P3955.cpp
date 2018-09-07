#include <cstdio>
#include <algorithm>
#include <iostream>

typedef long long ll;
const int Maxn = 10003;

ll wgt[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 1000000};
ll books[Maxn];
ll n, m, l, r;

inline int ask(int l, int r) {
    for(register ll i = 0; i <= n; ++ i) {
        if(books[i] % wgt[l] == r) {
            return books[i];
        }
    }
    return -1;
}

int main() {
    register ll i, j;

    std::cin >> n >> m;

    for(i = 0; i < n; ++ i) std::cin >> books[i];

    std::sort(books, books + n);

    for(i = 0; i < m; ++ i) {
        std::cin >> l >> r;
        std::cout << ask(l, r) << "\n";
    }
}
