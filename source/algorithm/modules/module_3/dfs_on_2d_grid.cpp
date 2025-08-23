#include <bits/stdc++.h>
using namespace std;
char grid[1005][10005];
bool vis[1005][10005];
vector<pair<int, int>> mv = {{-1,0}, {1, 0}, {0, 1}, {0,-1}};

void dfs(int si, int sj){
    // cout << si << " " << sj; 
    vis[si][sj] = true; 

    for(int i = 0; i < 4; i++){
        int child_row, child_col; 
        child_row = si +  mv[i].first; 
        child_col = sj + mv[i].second; 

        cout << child_row << " " << child_col << endl; 
    }


}


int main()
{

    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];

    int si , sj; 
    cin >> si >> sj; 
    dfs(si, sj); 

    return 0;
}