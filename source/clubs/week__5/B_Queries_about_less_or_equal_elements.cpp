

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace __gnu_pbds;

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


 template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, m; 
    cin >> n >> m; 
    pbds<int> p;
    for(int i = 1; i <= n; i++){
        int x; 
        cin >> x; 
        p.insert(x); 
    }
    for(int i = 1; i <= m; i++){
        int x; 
        cin >> x; 
        cout << p.order_of_key(x + 1) << " "; 
    }


    return; 
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
