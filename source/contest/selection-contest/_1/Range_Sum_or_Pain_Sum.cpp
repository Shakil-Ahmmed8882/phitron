#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    long long q;
    cin >> n >> q; 

    
    if (n < 2 || (n % 2) != 0) return 0;

    
    vector<ll> seq(n + 1);  
    for (ll i = 1; i <= n / 2; ++i) {
        seq[2 * i - 1] = i;
        seq[2 * i]     = i;
    }

    vector<ll> prefix(n + 1, 0);
    for (ll i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + seq[i];
    }

    
    while (q--) {
        ll l, r;
        cin >> l >> r;
        ll sum = prefix[r] - prefix[l - 1]; 
        cout << sum << '\n';
    }

    return 0;
}
