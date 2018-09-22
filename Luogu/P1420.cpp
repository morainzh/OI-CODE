#include <iostream>

const int N = 1003;

int a[N];

int main() {
    register int i, j;
    int n, m;
    int maxv = 0, cnt = 0;

    std::cin >> n;
    for(i = 1; i <= n; ++ i) std::cin >> a[i];

    for(i = 2; i <= n; ++ i) {
        if(a[i] - a[i - 1] != 1) {
            if(maxv < cnt) maxv = cnt;
            cnt = 0;
        }
        ++ cnt;
    }

    if(maxv < cnt) maxv = cnt;
    std::cout << maxv;

    return 0;
}
