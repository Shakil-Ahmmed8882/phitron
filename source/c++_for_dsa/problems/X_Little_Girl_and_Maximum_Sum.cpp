#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<ll> freq(n + 2, 0); 

    
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        freq[l] += 1;
        if (r + 1 <= n) freq[r + 1] -= 1;
    }

    
    for (int i = 1; i <= n; ++i) freq[i] += freq[i - 1];

    
    freq.pop_back();
    freq.erase(freq.begin()); 

    

    sort(a.rbegin(), a.rend());
    sort(freq.rbegin(), freq.rend());



    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += a[i] * freq[i];
    }

    cout << ans << "\n";
}

int main() {
    FAST_IO;
    solve();
}
