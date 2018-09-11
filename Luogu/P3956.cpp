#include <iostream>

const int N = 1003;

int movex[] = {-1, 0, 1, 0};
int movey[] = {0, -1, 0, 1};

int n, m;

int maze[N][N];

inline bool DFS(int x, int y, int coin, bool last) {
    //check
    //we can also check this before expand new nodes
    if(x < 1 || y < 1 || x > m || y > m) return false;
    if(!maze[x][y]) return false;
    f[x][y] = coin;
    for(i = 0; i < 4; ++ i) {
        int newx, newy;
        newx = x + movex[i];
        newy = y + movey[i];
        if(maze[newx][newy]) {
            (maze[newx][newy] == maze[x][y]) ? DFS(newx, newy, coin, false) : DFS(newx, newy, coin + 1, false);
        } else {
            if(maze[newx][newy]) {
                dfs()
            }
        }
    }
}

int main() {
    register int i, j;

    std::cin >> m >> n;
    for(i = 1; i <= n; ++ i) {
        std::cin >> x >> y >> z;
    }

    DFS(1, 1, 0, false);
}
