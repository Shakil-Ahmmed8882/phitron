

#include <bits/stdc++.h>
using namespace std;
int n , m; 
char matrix[1005][1005]; 
bool vis[1005][1005]; 
vector<pair<int, int>> mv = {{1,0},{-1, 0},{0, 1},{0,-1}};
bool is_same_component; 

bool valid(int ci, int cj){
    if(n < 0 || ci >= n || m < 0 || cj >= m){
        return false; 
    }
    return true; 
}

void dfs(int si, int sj){

    vis[si][sj] = true; 
    
    for(auto d: mv){
        int ci = si + d.first; 
        int cj = sj + d.second; 

        if(valid(ci,cj) && !vis[ci][cj] && matrix[ci][cj] == '.'){
            dfs(ci,cj); 
        }
    }
}

int main()
{
    cin >> n >> m; 

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j]; 


    int si, sj, ti, tj; 
    cin >> si >> sj >> ti >> tj; 
    memset(vis, false, sizeof(vis)); 


    if(matrix[si][sj] == '-' || matrix[ti][tj] == '-'){
        cout << "NO\n"; 
        return 0; 
        
    }

    dfs(si, sj); 

    if(vis[ti][tj])
        cout << "YES\n"; 
    else
         cout << "NO\n"; 

    return 0;
}