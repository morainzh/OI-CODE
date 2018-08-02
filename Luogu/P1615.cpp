#include <cstdio>
#include <iostream>

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
}

int main() {
    char ch;
    register ll i, j;
    register ll a, b, c, x, y, z, t;

    scanf("%lld%c%lld%c%lld %lld%c%lld%c%lld %lld", &a, &ch, &b, &ch, &c, &x, &ch, &y, &ch, &z, &t);
    printf("%lld", ((x-a)*3600+(y-b)*60+(z-c))*t);

    return 0;
}
