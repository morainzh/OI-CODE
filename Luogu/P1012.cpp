#include <iostream>
#include <string>
#include <algorithm>

inline bool compare(std::string a, std::string b) {
    return (a + b) > (b + a);
}

int main() {
    std::string s[233];
    register int i, j;
    int n;

    std::cin >> n;
    for(i = 0; i < n; ++ i) std::cin >> s[i];

    std::sort(s, s + n, compare);

    for(i = 0; i < n; ++ i) std::cout << s[i];

    return 0;
}
