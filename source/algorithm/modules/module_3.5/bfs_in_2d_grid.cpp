#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> mv = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int r, c;
bool valid(int cr, int cc){


    if(cr < 0 || cr >= r || cc < 0 || cc >= c)
        return false; 
    return true ;  
}



void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int par_i = par.first;
        int par_j = par.second;
        q.pop(); 

        cout << par_i << " " << par_j << endl; ; 
        for(int i = 0; i < 4 ; i++){
            int ci = par_i + mv[i].first; 
            int cj = par_j + mv[i].second; 

            if(valid(ci, cj) && !vis[ci][cj]){
                q.push({ci, cj}); 
                vis[ci][cj] = true; 
            }
                
        }
    }
    
}

int main()
{

    
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    return 0;
}