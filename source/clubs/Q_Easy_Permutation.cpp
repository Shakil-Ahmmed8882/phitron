#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    if (!(cin >> n)) return;
    //.. 
    for (int i = n; i >= 1; --i)
        cout << i << (i == 1 ? "" : " ");

    cout << "\n";
}

int main() {
    FAST_IO;
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
