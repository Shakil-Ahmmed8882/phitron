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
        adj_list[a].push_back(b); // 0 -> 1
    }

    int q; 
    cin >> q; 

    while(q--){
        int q1, q2; 
        cin >> q1 >> q2; 

        bool found = false ; 
        for(int child : adj_list[q1]){
            if(child == q2){
                found = true; 
                break; 
            }
        }

        if(q1 == q2) cout << "YES" << endl; 
        else if(found) cout << "YES" << endl; 
        else cout << "NO" << endl; 

    }



    return 0;
}