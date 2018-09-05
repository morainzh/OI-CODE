#include <iostream>
#include <vector>

int G[100005];

int main() {
    int n, m;
    int x, y;
    int i, j;
    int cnt = 0;

    std::cin >> n >> m;
    for(i = 1; i <= m; ++ i) {
        std::cin >> x >> y;
        ++ G[x];
        ++ G[y];
    }

    for(i = 1; i <= n; ++ i) {
        if(G[i] & 1) {
            ++ cnt;          // if it a odd node
        }
    }

    if(cnt == 0 || cnt == 2) {
        std::cout << 1;
    } else {
        std::cout << (cnt/2);
    }
}
