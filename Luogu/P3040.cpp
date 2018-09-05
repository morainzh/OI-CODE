#include <iostream>
#include <algorithm>

const int N = 103;

int B[N];

inline bool check(int x) {

}

int main() {
    std::ios::sync_with_stdio(false);

    register int i, j;
    register int n;
    register int l, r, mid;

    std::cin >> n;
    for(i = 1; i <= n; ++ i) std::cin >> B[i];

    std::sort(B, B + n);

    while(l < r) {
        mid = (l + r) / 2;
        if(check(mid))
    }
}
