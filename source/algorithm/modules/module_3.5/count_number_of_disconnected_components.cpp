
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool vis[1000];

void dfs(int src)
{

    cout << src << " "; 
    vis[src] = true; 
    for(int child: adj_list[src])
        if(!vis[child])
            dfs(child); 
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int cnt = 0; 

    memset(vis, false, sizeof(vis));

    for(int i = 0; i < n; i++){
        if(vis[i] == false){
            dfs(i); 
            cnt++; 
            cout << endl; 
        }
    }

    cout << " Number of components: " << cnt; 

    return 0;

}