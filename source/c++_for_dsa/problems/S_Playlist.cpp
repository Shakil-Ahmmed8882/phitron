#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    map<ll, int> last_seen;   

    int l = 0, max_len = 0;

    for (int r = 0; r < n; ++r) {

        
        if (last_seen.count(a[r]) && last_seen[a[r]] >= l)
            l = last_seen[a[r]] + 1;
        last_seen[a[r]] = r;
        max_len = max(max_len, r - l + 1);
    }

    cout << max_len << "\n";
}

int main() {
    FAST_IO;
    solve();
}
