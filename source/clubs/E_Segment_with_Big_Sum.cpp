#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if(!(cin >> T)) return 0;
    while(T--) {
        int n;
        ll s;
        cin >> n >> s;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        ll cur = 0;          // current sum of window [l..r]
        int best = INT_MAX;  // shortest length found
        int l = 0;
        
        for(int r = 0; r < n; r++) {
            cur += a[r];
            
            // shrink from left as long as sum >= s
            while(cur >= s && l <= r) {
                best = min(best, r - l + 1);
                cur -= a[l];
                l++;
            }
        }
        
        cout << (best == INT_MAX ? -1 : best) << '\n';
    }
}