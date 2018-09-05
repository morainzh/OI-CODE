#include <iostream>

const int N = 10003;
typedef long long ll;

int f[N];

inline int father( int k ) {
    if( f[k] == k ) {
        return k;
    }
    return f[k] = father(f[k]);
}

int main() {
    int i, j;
    int n, m;
    int z, x, y;


    for(int i = 1; i <= N; ++ i) f[i] = i;

    std::cin >> n >> m;
    for(i = 1; i <= m; ++ i) {
        std::cin >> z >> x >> y;
        if(z == 1) {
            f[father(x)] = father(y);
        } else {
            if(father(x) == father(y)) {
                std::cout << "Y\n";
            } else {
                std::cout << "N\n";
            }
        }
    }
}
