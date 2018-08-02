#include <cstdio>
#include <cstdlib>

typedef long long ll;
const int Maxn = 10003;
using namespace std;

int input[Maxn][5];

inline ll read() {
    ll f = 1, x = 0; char c;
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
    register int n;
    register int a, b, g, k, x, y;

    n = read();
    for(i = 1; i <= n; ++ i) {
        a = read(); b = read();
        g = read(); k = read();
        input[i][1] = a; input[i][2] = b;
        input[i][3] = g; input[i][4] = k;
    }
    x = read(); y = read();

    for(i = n; i >= 1; --i) {
        if(  (input[i][1]<=x) && (input[i][3]+input[i][1]>=x) && \
             (input[i][2]<=y) && (input[i][2]+input[i][4]>=y)  ) {
            printf("%d", i);
            exit(0);
        }
    }

    puts("-1");

    return 0;
}
