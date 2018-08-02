#include <cstdio>
#include <map>
#include <cstring>

using namespace std;

map<char, int> letter;

int maxv;

inline void cnt(string s) {
    for(register int i = 0; i <= s.size(); ++ i) {
        letter[s[i]] ++;
        if(maxv < letter[s[i]]) maxv = letter[s[i]];
    }
    return;
}

int main() {
    string s;
    int i = 4, j;
    while(i--) {
        scanf("%s", s);
        cnt(s);
    }

    for(i = maxv; i >= 0; ++ i) {
        for(j = 'A'; j <= 'Z'; ++ j) {
            if(letter[j] > i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
