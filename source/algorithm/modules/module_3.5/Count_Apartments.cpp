#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> vis;
int r, c;

vector<pair<int,int>> mv = {{-1,0}, {0,1}, {1,0}, {0,-1}};

bool valid(int cr, int cc){
    return cr >= 0 && cr < r && cc >= 0 && cc < c;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while(!q.empty()){
        auto [i, j] = q.front(); q.pop();
        for(auto [di, dj] : mv){
            int ni = i + di;
            int nj = j + dj;
            if(valid(ni, nj) && !vis[ni][nj] && grid[ni][nj] == '.'){
                vis[ni][nj] = true;
                q.push({ni, nj});
            }
        }
    }
}

int main(){
    cin >> r >> c;
    cin.ignore(); 

    grid.assign(r, vector<char>(c));
    vis.assign(r, vector<bool>(c, false));

    for(int i = 0; i < r; i++){
        string s;
        getline(cin, s);
        for(int j = 0; j < c; j++){
            grid[i][j] = s[j];
        }
    }

    int apartments = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(grid[i][j] == '.' && !vis[i][j]){
                bfs(i, j);
                apartments++;
            }
        }
    }

    cout << apartments << endl;
    return 0;
}
