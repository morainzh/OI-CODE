#include <iostream>

inline int work(int x, int y) {
    int ans = 1, cache = x;
    while(y > 0) {
        if(y & 1) ans *= cache;
        cache *= cache;
        y >>= 1;
    }
    return ans;
}

int main() {
    register int i, j;
    register int x, y, z;

    std::cin >> x >> y >> z;
    int wtf = work(x, y);
    std::cout << x << "^" << y << " mod " << z << "=" << wtf%z;
}
