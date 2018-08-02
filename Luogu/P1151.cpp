#include <cstdio>

typedef long long ll;
const int Maxn = 10003;

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
    register ll a, b;
    a = read(); b = read();

    printf("%d", a + b);

    return 0;
}
