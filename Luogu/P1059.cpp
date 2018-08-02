#include <cstdio>
#include <set>

typedef long long ll;
const int Maxn = 10003;
using namespace std;

inline ll read() {
    int f = 1, x = 0;
    char c;
    while(c < '0' || c > '9') {
        c = getchar();
        if(c == '-') f = -1;
    }
    while(c <= '9' && c >= '0') {
        x = x * 10 + c - 48;
        c = getchar();
    }

    return f * x;
}

set<ll> s;

int main() {
    register int i, j;
    register int n, x;

    n = read();
    for(i = 1; i <= n; ++ i) x = read(), s.insert(x);

    printf("%d\n", s.size());
    while(!s.empty()) {
        printf("%d ", *s.begin());
        s.erase(s.begin());
    }

    return 0;
}
