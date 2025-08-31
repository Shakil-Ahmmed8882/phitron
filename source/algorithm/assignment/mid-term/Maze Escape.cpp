#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> maze;
pair<int,int> parent[1005][1005];
bool vis[1005][1005];


vector<pair<int,int>> mv = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool valid(int x,int y){
    return (x>=0 && x<n && y>=0 && y<m && maze[x][y] != '#' && !vis[x][y]);
}

void bfs(int sx,int sy,int dx,int dy){
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy] = true;

    bool found = false;
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        int x = cur.first, y = cur.second;

        if(x==dx && y==dy){ found = true; break; }

        for(auto d : mv){
            int nx = x + d.first;
            int ny = y + d.second;
            if(valid(nx,ny)){
                vis[nx][ny] = true;
                parent[nx][ny] = {x,y};
                q.push({nx,ny});
            }
        }
    }

    if(found){
        int x=dx, y=dy;
        while(!(x==sx && y==sy)){
            if(maze[x][y]=='.') maze[x][y]='X';
            auto p = parent[x][y];
            x = p.first; y = p.second;
        }
    }
}

int main() {
    cin >> n >> m;
    maze.resize(n);
    int sx, sy, dx, dy;

    for(int i=0;i<n;i++){
        cin >> maze[i];
        for(int j=0;j<m;j++){
            if(maze[i][j]=='R'){ sx=i; sy=j; }
            if(maze[i][j]=='D'){ dx=i; dy=j; }
            parent[i][j] = {-1,-1};
            vis[i][j] = false;
        }
    }

    bfs(sx, sy, dx, dy);

    for(int i=0;i<n;i++) cout << maze[i] << "\n";

    return 0;
}
