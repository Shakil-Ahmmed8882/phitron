

#include <bits/stdc++.h>
using namespace std;
char matrix[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mv = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool no_area = true;
int area = 0;
int min_area = INT_MAX; 
int n, m;

bool valid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}

void dfs(int si, int sj)
{
    area++;
    vis[si][sj] = true;

    for (auto d : mv)
    {
        int ci = si + d.first;
        int cj = sj + d.second;

        if (valid(ci, cj) && !vis[ci][cj] && matrix[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && matrix[i][j] == '.'){
                no_area = false; 
                area = 0; 
                dfs(i,j); 
                min_area = min(min_area, area); 
            }
        }
    }

    if (no_area)
    {
        cout << -1 << endl;
    }else{
        
        cout << min_area << endl;
    }
    return 0;
}