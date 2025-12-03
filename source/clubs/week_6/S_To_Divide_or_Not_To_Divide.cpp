#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b, n;
    if (!(cin >> a >> b >> n)) return;

    //.. 
    if (a % b == 0) {
        cout << "-1\n";
        return;
    }
    ll x_statr = ((n + a - 1) / a) * a;
    cout << (x_statr % b != 0 ? x_statr : x_statr + a) << "\n";
}

int main() {
    FAST_IO;
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
