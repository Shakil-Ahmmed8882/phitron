#include <bits/stdc++.h>
using namespace std;
char grid[1005][10005];
bool vis[1005][10005];
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
int r, c;

bool valid(int cr, int cl)
{
    if(cr < 0 || cr >= r || cl < 0 || cl >= c)
        return false; 

    return true; 

}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl; 
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {

        int cr = si + mv[i].first; // child row 
        int cl = sj + mv[i].second; // child column

        if(valid(cr, cl) && !vis[cr][cl])
            dfs(cr, cl); 
    }
}

int main()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}