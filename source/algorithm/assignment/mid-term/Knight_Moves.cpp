#include <bits/stdc++.h>
using namespace std;

int n, m;
int kx, ky, qx, qy;
bool vis[1005][1005];
int dist[1005][1005]; 

// Knight moves
vector<pair<int, int>> mv = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int bfs() {
    queue<pair<int, int>> q;

    q.push({kx, ky});
    vis[kx][ky] = true;
    dist[kx][ky] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == qx && y == qy) 
            return dist[x][y];

        for (auto d : mv) {
            int nx = x + d.first;
            int ny = y + d.second;

            if (valid(nx, ny) && !vis[nx][ny]) {
                vis[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return -1; 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        cin >> kx >> ky;
        cin >> qx >> qy;

        // memset 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                vis[i][j] = false;
                dist[i][j] = 0;
            }
        }

        cout << bfs() << endl;
    }
    return 0;
}
