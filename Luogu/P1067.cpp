#include <cstdio>
#include <cmath>

typedef long long ll;

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

inline void write( int x ) {
     if( x < 0 ) putchar( '-' ), x =- x;
     if( x > 9 ) write( x/10 );
     putchar( x % 10 + '0' );
}

int main() {
    register int i, j;
    register int n, x;
    n = read();

    for( i = n; i >= 0; -- i ) {
        x = read();
        if( x ) {
            if( i != n && x > 0 ) printf("+");
            if( fabs( x ) > 1 || i == 0 ) printf("%d", x);
            if( x == -1 && i ) printf("-");
            if( i > 1 ) printf("x^%d", i);
            if( i == 1 ) printf("x");
        }
    }

    return 0;
}
