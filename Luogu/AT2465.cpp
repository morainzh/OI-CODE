#include <iostream>

int main() {
    register int s[5];
    int cnt = 0;

    for(register int i = 0; i < 5; ++ i) {
        std::cin >> s[i];
        if(s[i] < 40) s[i] = 40;
        cnt += s[i];
    }

    std::cout << cnt / 5;

    return 0;
}
