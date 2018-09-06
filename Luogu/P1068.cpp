#include <iostream>
#include <algorithm>
#include <cmath>

typedef long long ll;
const int N = 10003;

struct node {
    int num, sum;
}a[N];

inline bool compare(node x, node y) {
    return (x.sum == y.sum) ? (x.num < y.num) : x.sum > y.sum;
}

int main() {
    register int i, j;
    register int n, m, tot = 0;

    std::cin >> n >> m;
    for(i = 1; i <= n; ++ i) std::cin >> a[i].num >> a[i].sum;

    std::sort(a + 1, a + n + 1, compare);
    m = floor(m * 1.5);

    i = 1;
    while(a[i].sum >= a[m].sum) {
        ++ i;
        ++ tot;
    }
    std::cout << a[m].sum << ' ' << tot << "\n";
    i = 1;
    while(a[i].sum >= a[m].sum) {
        std::cout << a[i].num << ' ' << a[i].sum << "\n";
        ++ i;
    }

    return 0;
}
