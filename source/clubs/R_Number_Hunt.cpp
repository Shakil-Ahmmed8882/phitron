#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    return true;
}

void solve() {
    ll X;
    if (!(cin >> X)) return;
    ll P1 = X;


    while (!is_prime(P1)) 
        P1++;
    ll P2 = P1 + 1;
    //.. 
    while (!is_prime(P2)) 
    P2++;
    cout << P1 * P2 << "\n";
}

int main() {
    FAST_IO;
    int t;

    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
