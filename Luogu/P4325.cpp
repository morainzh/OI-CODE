#include <cstdio>
#include <set>

inline int read() {
    int f = 1, x = 0;
    char c;
    while(c < '0' || c > '9') {
        c = getchar();
        if(c == '-') f = -1;
    }
    while(c >= '0' && c <= '9') {
        x = x * 10 + c -48;
        c = getchar();
    }

    return f * x;
}

std::set<int> s;

int main() {
    int n, x;
    int i, j;

    for(i = 1; i <= 10; ++ i) {
        x = read();
        s.insert(x%42);
    }

    printf("%d", s.size());

    return 0;
}
