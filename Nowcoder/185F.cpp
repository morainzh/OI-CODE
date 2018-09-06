#include <iostream>
#include <cmath>

typedef long long ll;

inline ll pp(int n) {
    for(int i = 1; i <= n; ++ i) {
        n *= i;
    }
    return n;
}

inline ll ppp(int x, int y) {
    for(int i = 1; i <= y; ++ i) {
        x *= x;
    }
    return x;
}

int main() {
    int x, n;

    std::cin >> x;
    for(int i = 1; ; ++ i) {
        if(pp(i) > ppp(x, x)) {
            std::cout << i;
            return 0;
        }
    }

}
