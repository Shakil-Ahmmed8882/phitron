#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    
    sort(a.begin(), a.end());

    int l = 0, r = n - 1;

    while (l < r) {
        ll sum = a[l].first + a[r].first;

        if (sum == x) {
            cout << a[l].second << " " << a[r].second << "\n";
            return;
        }
        if (sum < x) l++;
        else r--;
    }

    cout << "IMPOSSIBLE\n";
}

int main() {
    FAST_IO;
    solve();
}
