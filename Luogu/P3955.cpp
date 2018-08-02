#include <cstdio>
#include <algorithm>

typedef long long ll;
const int Maxn = 1003;
using namespace std;

inline ll read() {
    ll f = 1, x = 0;
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

int wgt[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
int books[Maxn];

int main() {
    register int i, j;
    register int n, m;
    register int l, r;
    register bool flag = false;

    n = read(); m = read();
    for(i = 0; i < n; ++ i) {
        books[i] = read();
    }

    sort(books, books + n);

    for(i = 0; i < m; ++ i) {
        l = read(); r = read();
        for(j = 0; j < n; ++ j) {
            if(books[j] % wgt[l] == r) {
                printf("%d\n", books[j]);
                flag = true;
            }
        }
        if(!flag) puts("-1");
        flag = false;
    }

    return 0;
}
