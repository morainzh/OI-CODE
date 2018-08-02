#include <cstdio>

typedef long long ll;

inline ll read() {
    ll f = 1, x = 0;
    char c;
    while(c < '0' || c > '9') {
        c = getchar();
        if(c == '-') f = -1;
    }
    while(c <= '9' && c >= '0') {
        x =x * 10 + c - 48;
        c = getchar();
    }
    return f * x;
}

int main() {
    register int a = read(), b = read();

    printf("%d", (a*10+b)/19);

    return 0;
}
