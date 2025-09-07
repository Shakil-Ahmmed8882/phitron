
#include <bits/stdc++.h>
using namespace std;


int find(int par[], int node){
    if(par[node] == node)
        return node; 

    return par[node] = find(par, par[node]); 
}


void dsu_union (int par[], int node1, int node2) {
    int leader1 = find(par, node1); 
    int leader2 = find(par, node2); 

    if(leader1 != leader2)
        par[leader1] = leader2; 
}


int main()
{
    
    int n, e; 
    cin >> n >> e; 
    int parent[n + 1]; 
    for(int i = 0; i <= n; i++){
        parent[i] = i; 
    }
    int cycle_count = 0; 

    while(e--){
        int u, v; 
        cin >> u >> v; 

        int root_u = find(parent, u); 
        int root_v = find(parent, v); 

        if(root_u == root_v){
            cycle_count++; 
        }else{
            dsu_union(parent, root_u, root_v); 
        }

    }

    cout << cycle_count<< endl;


    return 0;
}