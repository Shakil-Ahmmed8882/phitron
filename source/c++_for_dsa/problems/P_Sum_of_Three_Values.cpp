#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }



    sort(a.begin(), a.end());





    for (int i = 0; i < n; ++i) {
        ll target = x - a[i].first;
        int l = i + 1, r = n - 1;
        

        while (l < r) {
            ll sum = a[l].first + a[r].first;
            if (sum == target) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                return;
            }
            if (sum < target)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main() {
    FAST_IO;
    solve();
}
