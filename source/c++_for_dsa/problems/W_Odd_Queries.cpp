#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1);
        vector<int> prefix(n + 1, 0);  // prefix sums modulo 2

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = (prefix[i - 1] + a[i]) % 2;
        }

        int total = prefix[n];  // total parity

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            int sum_removed = (prefix[r] - prefix[l - 1] + 2) % 2;
            int added = (k % 2) * (len % 2) % 2;
            int new_parity = (total - sum_removed + added + 2) % 2;
            cout << (new_parity == 1 ? "YES" : "NO") << "\n";
        }
    }
}

int main() {
    FAST_IO;
    solve();
}
