#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    FAST_IO;
    int n; 
    ll k; 
    
    
    if (!(cin >> n >> k)) return 0;
    pbds<int> s; 
    
    for (int i = 1; i <= n; i++)
        s.insert(i);
    
    int idx = (k % n); 
    int cur_n = n; 

    // ... 
    while(cur_n > 0)
    {
        auto it = s.find_by_order(idx); 
        cout << *it << " ";
        s.erase(it); 
        cur_n--; 
        if(cur_n > 0) 
            idx = (idx + k) % cur_n;
    }
    nl;
    return 0;
}