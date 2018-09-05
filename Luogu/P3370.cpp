#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> s;

    int i, n;
    std::string str;

    std::cin >> n;
    for(i = 1; i <= n; ++ i) {
        std::cin >> str;
        s.insert(str);
    }

    std::cout << s.size();

    return 0;
}
