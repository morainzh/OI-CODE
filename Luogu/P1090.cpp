#include <cstdio>
#include <set>

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
    while(c <= '9' && c >= '0') {
        x =x * 10 + c - 48;
        c = getchar();
    }
    return f * x;
}

multiset<ll> q;

int main() {
    register ll i, j;
    register int n, x;
    register ll ans = 0, a = 0;

    n = read();
    for(i = 1; i <= n; ++ i) x = read(), q.insert(x);

    for(i = 1; i <= n - 1; ++ i) {
        a = *q.begin();
        q.erase(q.begin());
        a += *q.begin();
        q.erase(q.begin());
        ans += a;
        q.insert(a);
    }

    printf("%d\n", ans);
    return 0;
}
