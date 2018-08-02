#include <cstdio>
#include <algorithm>

typedef long long ll;
using namespace std;
const int Maxn = 100003;

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

int q[Maxn];

int main() {
    register int i, j;
    register int n;
    register int x;
    n = read();
    for(i = 0; i < n; ++ i) {
        q[i] = read();
    }
    
    sort(q, q + n);
    for(i = 0; i < n; ++ i) {
        printf("%d ", q[i]);
    }

    return 0;
}
