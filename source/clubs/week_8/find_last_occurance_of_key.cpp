#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO;
    
    int n, q; 
    cin >> n >> q; 

    vector<int> a(n); 
    for(int i = 0; i< n; i++)
        cin >> a[i]; 
    
    for(int i = 0; i < q; i++){
        int key, l = 0, r = n - 1, mid, ans= -1; 
        cin >> key; 

        while ( l <= r)
        {
            mid = l + (r - l) / 2; 
            if(key == a[mid]){
                ans = mid; 
                l = mid +  1; 
            }else if (key < a[mid]){
                r = mid  - 1; 
            }else{
                l = mid + 1; 
            }
        }
        
        cout << ans << "\n"; 
    }
    
    return 0;
}



/*
ALGORITHM 
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/max_path_sum.png?raw=true
https://raw.githubusercontent.com/Shakil-Ahmmed8882/phitron/refs/heads/main/source/algorithm/modules/assets/floyd_warshall_implementation.png
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/%23blocked_path.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dynamic_programming/factorial.png?raw=true
✅ fibonacci 
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dynamic_programming/fibonacci_with_memoization.png?raw=true
knapsack 
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/knap-sack/knap-sack-0-1.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/knap-sack/knap-sack-0-2.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/knap-sack/knap-sack-recursive_calls_complexity.png?raw=true

✅blocked path 
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/%23blocked_path.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/bellman_ford_implementation.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/bellman_ford_theory.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/bfs.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/bfs_in_2d_grid.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/cycle_detection.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dfs.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dijkstra_algo.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dijkstra_implementation_in_bfs.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/disconnected_components_count.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dsu_find_opration.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/dynamic_programming-1.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/floyd_warshall_implementation.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/grid_area_validity_check.png.png?raw=true
https://github.com/Shakil-Ahmmed8882/phitron/blob/main/source/algorithm/modules/assets/why_bellman_ford.png?raw=true
*/