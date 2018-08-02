#include <cstdio>

typedef long long ll;
const int Maxn = 10003;
using namespace std;

inline ll read() {
    ll f = 1, x = 0;
    char c;
    while(c < '0' || c > '9') {
        c = getchar();
        if(c == '-') f = -1;
    }
    while(c >= '0' && c <= '9') {
        x = x * 10 + c- 48;
        c = getchar();
    }

    return f * x;
}

int main() {
    register int i, j;
    register int x, n;
    register ll ans = 1;

    x = read(); n = read();
    for(i = 1; i <= n; ++ i, ans = x*ans + ans);

    printf("%lld\n", ans);

    return 0;
}
