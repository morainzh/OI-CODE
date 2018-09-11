#include <iostream>
#include <string>


int main() {
    register int i, j;
    register int n, m;
    std::string s;

    std::cin >> n >> m >> s;

    for(i = 1, j = s.size(); i <= s.size(), j >= 0; ++ i, -- j) {
        if(s[i] != s[j]) break;
        s[j] = ' ';
    }
    std::cout << s;
}
