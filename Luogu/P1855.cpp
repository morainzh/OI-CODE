#include <iostream>
#include <pair>

const int N = 10003;

struct node {
    int x, y;
};

node y[N];

inline bool cmp(node a, node b) {
    return ( a.x < b.x ) ? ( a.y < b.y ) : ( a.x > b.x ); 
}

int main() {
    register int i, j;
    register int n, m, t;

    std::cin >> n >> m >> t;
    for(i = 1; i <= n; ++ i) {
        std::cin >> y[i].x >> y[i].y;
    }
}
