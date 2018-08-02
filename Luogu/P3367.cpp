#include <cstdio>
#include <map>

using namespace std;

int m[10003];

inline int read() {
    int f = 1, x = 0;
    char c;
    while(c < '0' || c > '9') {
        c = getchar();
        if(c == '-') f = -1;
    }
    while(c >= '0' && c <= '9') {
        x = x * 10 + c -48;
        c = getchar();
    }

    return f * x;
}

inline int query(int x, int y) {
    while(m[x] != y && m[y] != x) {
        y = m[x];
        if(y == 0) return false;
    }
    return true;
}

int main() {
    int i, j;
    int n, m;
    int x, y, z;

    scanf("%d%d", &n, &m);

    for(i = 1; i <= m; ++ i) {
        scanf("%d%d%D", &x, &y, &z);
        if(x == 1) {
            m[y] = z;
        } else {
            if(query(z, y)) {
                puts("Y");
            } else {
                puts("N");
            }
        }
    }

    return 0;
}
