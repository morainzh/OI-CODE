#include <iostream>

const int N = 10003;

int a[N], b[N];

int main() {
    register int i, j;
    int n;
    bool flag = false;

    std::cin >> n;
    for(i = 1; i <= n; ++ i, std::cin >> a[i]);

    for(i = 1; i <= n; ++ i) {
        for(j = i + 1; j <= n; ++ j) {
            if(a[j] > a[i]) {
                b[i] = j;
                flag = true;
                break;
            }
        }
        if(!flag) b[i] = 0;
        flag = false;
    }

    for(i = 1; i <= n; ++ i, std::cout << b[i] << ' ');

    return 0;
}
