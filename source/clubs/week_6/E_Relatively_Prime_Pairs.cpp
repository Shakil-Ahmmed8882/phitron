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

void solve() {
    ll l, r;
    if (!(cin >> l >> r)) return;

    cout << "YES\n";
    
    for (ll i = l; i <= r; i += 2) {
        cout << i << " " << (i + 1) << "\n";
    }
}

int main() {
    FAST_IO;
    solve();
    return 0;
}