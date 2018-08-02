#include <cstdio>

typedef long long ll;
const int Maxn = 10003;

inline int read() {
    int f = 1, x = 0;
    char c ;
    while(c < '0' || c > '9') {
        c = getchar();
        if(c == '-') f = -1;
    }
    while(c >= '0' && c <= '9') {
        x = x * 10 + c - 48;
        c = getchar();
    }

    return f * x;
}

int main() {
    register int n, x, ans = 0;
    n = read();
    for(register int i = 1; i <= n; ++ i) {
        x = read();
        x == n ? ++ ans : --ans;
        if(ans <= 1) x = n;
        ans = 1;
    }

    printf("%d", ans);

    return 0;
}
