#include <iostream>

const int N = 1003;

int a[N];

int main() {
    register int i, j;
    register int n, m;
    int maxv = 0;

    std::cin >> n >> m;
    for(i = 1; i <= n; ++ i) {
        std::cin >> a[i];
        if(a[i] > maxv) maxv = a[i];
    }

    if(m - maxv < 0) {
        
    }
}
