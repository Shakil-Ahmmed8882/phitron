#include <bits/stdc++.h>
using namespace std;
int r, c;
vector<vector<char>> grid(r, vector<char>(c));
vector<vector<bool>> vis(r, vector<bool>(c, false));

vector<pair<int, int>> mv = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool valid(int cr, int cc)
{

    if (cr < 0 || cr >= r || cc < 0 || cc >= c)
        return false;
    return true;
}

bool bfs(int ai, int aj, int bi, int bj)
{

    queue<pair<int, int>> q;
    q.push({ai, aj});
    vis[ai][aj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int par_i = par.first;
        int par_j = par.second;
        q.pop();

        if (par_i == bi && par_j == bj)
            return true;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + mv[i].first;
            int cj = par_j + mv[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                if (grid[ci][cj] == '.' || grid[ci][cj] == 'B')
                {
                    q.push({ci, cj});
                    vis[ci][cj] = true;
                }
            }
        }
    }

    return false;
}

int main()
{

    int ai, aj, bi, bj;
    cin >> r >> c;

    grid.resize(r, vector<char>(c));
    vis.resize(r, vector<bool>(c, false));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                ai = i;
                aj = j;
            }
            if (grid[i][j] == 'B')
            {
                bi = i;
                bj = j;
            }
        }
    }

    if (bfs(ai, aj, bi, bj))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}