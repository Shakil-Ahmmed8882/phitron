#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n, e; 
    cin >> n >> e; 
    vector<int> adj_list[n]; 

    for(int i = 0; i< e; i++){
        int a , b; 
        cin >> a >> b; 
        adj_list[a].push_back(b); 
        adj_list[b].push_back(a); 
    }

    int q; 
    cin >> q; 

    while(q--){
        int src; 
        cin >> src; 

        if(adj_list[src].empty()) {
            cout << -1 << endl; 
            continue;; 
        }

         sort(adj_list[src].begin(), adj_list[src].end(), greater<int>()); 
        for(int child : adj_list[src]){
            cout << child << " "; 
        }

        cout << endl; 


    }



    return 0;
}