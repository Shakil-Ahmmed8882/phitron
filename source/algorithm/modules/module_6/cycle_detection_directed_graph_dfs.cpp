

#include <bits/stdc++.h>
using namespace std;

    int n, e; 
    vector<int> adj_list[105];
    bool vis[105]; 
    bool pathVisit[105]; 
    bool cycle; 

void bfs(int src){
    queue<int> q; 
    q.push(src); 
    vis[src] = true; 
    pathVisit[src] = true;     

    while(!q.empty()){
        int currentSrc = q.front(); 
        q.pop(); 
        for(int child: adj_list[currentSrc]){
            if(vis[child] && pathVisit[child]){
                cycle = true; 
            }
            if(!vis[child]){
                q.push(child); 
                vis[child] = true; 
            }
        }
    }

    // false when return 
    pathVisit[src] = false;
}


int main()
{

    cin >> n >> e; 

    for(int i = 0; i < e; i++){
        int a , b; 
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    cycle = false; 
    for(int i = 0; i < n; i++){
        if(!vis[i])
            bfs(i); 
    }

    if(cycle)
        cout << "Cycle Detected \n"; 
    else    
        cout << "No Cycle \n"; 


    return 0;
}