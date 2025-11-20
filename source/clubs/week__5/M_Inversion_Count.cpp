

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

template <typename T>
using pbds = tree<T, null_type, less<T>,
                  rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n; 
    vector<int> a(n);

    for(int i = 0; i < n; i++) 
        cin >> a[i];


    ll ans = 0; 
    pbds<int> p; 

    for(int i = n - 1; i >= 0; i--){
        ans += p.order_of_key(a[i]); 
        p.insert(a[i]);
    }

    cout << ans << "\n";
    


    return;
}

int main()
{
    FAST_IO;

    int t; 
    cin >> t;

    while(t--){ 
        solve();
    }
    return 0;
}
