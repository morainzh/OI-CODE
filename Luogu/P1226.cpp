#include <cstdio>
#include <cmath>

typedef long long ll;
using namespace std;

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
    register ll b, p, k, ans = 0;
    b = read(); p = read(); k = read();
    printf("%lld^%lld mod %lld=%lld", b, p, k, int(pow(b, p))%k);
}
