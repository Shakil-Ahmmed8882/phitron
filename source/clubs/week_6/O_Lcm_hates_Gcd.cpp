#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve() {
    int T;
    if (!(cin >> T)) return;
    while (T--) {
        ll A, B;
        cin >> A >> B;
        ll g = gcd(A, B);
        cout << (A - g) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}