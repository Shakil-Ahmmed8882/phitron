#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> x(n + 1);        
    
    vector<ll> prefix(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> x[i];
        prefix[i] = prefix[i - 1] + x[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << "\n";
    }
}

int main() {
    FAST_IO;
    solve();
}
