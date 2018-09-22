#include <iostream>

typedef long long ll;

int main() {
    ll x, y;
    std::cin >> x >> y;
    if((x + y) <= 9223372036854775807 || 9223372036854775808 <= (x + y)) {
        std::cout << x + y;
    } else {
        std::cout << "hello, %%lld\\n";
    }
}
