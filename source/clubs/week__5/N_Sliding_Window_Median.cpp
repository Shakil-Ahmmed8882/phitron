

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
    int n, k;
    cin >> n >> k;


    vector<int> a(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }

    pbds<pair<int, int>> p;
    int l = 0, r = 0; 

    while (r < n)
    {
        p.insert({a[r],r}); 
        if(r - l + 1 == k){
            int pos = k / 2; 

            if(k % 2 == 0){
                pos--; 
            }
            auto it = p.find_by_order(pos); 
            cout << it->first << " "; 
            p.erase({a[l],l}); 
            l++;
        }
        r++; 
    }
    



    return;
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
