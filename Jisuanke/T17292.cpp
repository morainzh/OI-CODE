#include <iostream>
#include <string>
#include <map>

const int N = 1003;

register int n, x;

struct node {
    int op, x;
    inline bool check(int i) {
        if((op == 1 && i > x) || (op == 2 && i >= x) || (op == 3 && i < x) || (op == 4 && i <= x) || (op == 5 && i == x)) return true;
    }
};

node state[N];
/*
1 : >
2 : >=
3 : <
4 : <=
5 : =
*/

std::map<std::string, int> map;

map['>']  = 1;
map[">="] = 2;
map['<']  = 3;
map["<="] = 4;
map['=']  = 5;

inline int add(int i) {
    int ans = 0;
    for(int j = 1; j <= n; ++ j) {
        if(state[j].check(i)) {
            ++ ans;
        }
    }
    return ans;
}

int main() {
    register int i, j;
    int maxv = 0, maxx;
    std::string s;

    std::cin >> n;
    for(i = 1; i <= n; ++ i) {
        std::cin >> s >> state[i].x;
        state[i].op = map[s];
    }

    for(i = 1; i <= 1000; ++ i) {
        num = add(i);
        if(num > maxv) maxv = num, maxx = i;
    }

    std::cout << maxx;
}
