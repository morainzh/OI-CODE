#include <cstdio>

typedef long long ll;

inline ll read() {
    ll f = 1, x = 0;
    char c;
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
    register int i, j;
    register int q[11];
    register int len;
    register int ans = 0;

    for(i = 1; i <= 10; ++ i) q[i] = read();
    len = read() + 30;

    for(i = 1; i <= 10; ++ i) {
        if(q[i] <= len) ++ans;
    }

    printf("%d\n", ans);

    return 0;
}
