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
    register float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    printf("%d\n", int(a * 0.2 + b * 0.3 + c * 0.5));

    return 0;
}
