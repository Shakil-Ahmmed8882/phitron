#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105]; 
int dis[105]; 
void dijkstra(int src){
    priority_queue<pair<int,int>> pq; 
    pq.push({src, 0}); 
    dis[src] = 0; 

    while (!pq.empty())
    {
        pair<int, int> par = pq.top(); 
        pq.pop(); 
        int  par_dis = par.first; 
        int par_node = par.second; 
        cout << par_node << " -> " << par_dis; 
        for(auto child: adj_list[par_node]){
            int child_node = child.first; 
            int child_dis = child.second; 
            int new_path_dis = par_dis + child_dis; 
            int old_path_dis = dis[child_node]; 

            if( new_path_dis < old_path_dis){
                dis[child_node] = new_path_dis; 
                pq.push({ new_path_dis, child_node}); 
            }
        }
        cout << endl; 
    }
}
int main(){
    
    int n, e; 
    cin >> n >> e; 
    for(int i = 0; i< e; i++){
        int a , b , c; 
        cin >> a >> b >> c; 
        adj_list[a].push_back({b,c}); 
        adj_list[b].push_back({a,c}); 
    }
    for(int i = 0 ; i < n; i ++)
        dis[i] = INT_MAX; 
        
        dijkstra(0); 
        
        // for(int i = 0 ; i < n; i ++)
        //     cout << dis[i] << " "; 


    return 0;
}