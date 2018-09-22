#include <iostream>
#include <set>

std::set<int> S;

int main() {
    register int i, j;
    int n, k, x, y, z;
    int cnt = 0;

    std::cin >> n >> k;
    S.insert(n);

    while(-- k) {
        x = *S.begin();
        S.erase(S.begin());

        y = int( x / 2 );
        z = int( x - y );
        cnt += y *z;
        S.insert(y); S.insert(z);
    }

    std::cout << cnt;

    return 0;
}
