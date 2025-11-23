#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);




void solve() {
    ll n, x, y;
    if (!(cin >> n >> x >> y)) return;
    ll totall__attack = 0;

    totall__attack += (n - 1) * 2;
    totall__attack += min(x - 1, y - 1);
    //.. 
    totall__attack += min(n - x, n - y);
    totall__attack += min(x - 1, n - y);
    totall__attack += min(n - x, y - 1);


    cout << totall__attack << "\n";
}

int main() {
    FAST_IO;
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
