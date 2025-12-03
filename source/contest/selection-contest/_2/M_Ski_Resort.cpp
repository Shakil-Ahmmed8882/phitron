#include <bits/stdc++.h>

using namespace std;; 
#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll count_valid_subarrays(ll L, ll k) {
    if (L < k) {
        return 0;
    }

    ll M = L - k + 1; 
    
    
    return M * (M + 1) / 2;
}

void solve()
{
    int n;
    ll k, q;
    cin >> n >> k >> q;

    vector<ll> a(n);
    fr(i, n) {
        cin >> a[i];
    }

    ll total_ways = 0;
    ll current_len = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] <= q) {
    ; 
            current_len++;
        } else {
    ; 
    ; 
            total_ways += count_valid_subarrays(current_len, k);
            
    ; 
            current_len = 0;
        }
    }
; 
    total_ways += count_valid_subarrays(current_len, k);

    cout << total_ways << "\n";
}

int main()
{
    FAST_IO;
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}