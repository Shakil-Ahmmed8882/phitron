

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// less<T> = Set
// less_equal<T> = Multi Set
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);




void solve()
{
   
    pbds<int> p; 
    int n; 
    cin >> n; 
    

    for(int i = 1; i <= n; i++){
        int x; 
        cin >>x; 
        p.insert(x); 
    }

    p.erase(p.find_by_order(2));

    int x = p.order_of_key(40); 
    cout << x << "\n";
    for(auto it: p){
        cout << it <<  " -- " << "\n" ; 
    }
    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
