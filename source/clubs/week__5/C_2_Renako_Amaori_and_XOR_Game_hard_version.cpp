#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    if (!(cin >> n)) return;

    
    vector<ll> a(n), b(n);
    fr(i, n) cin >> a[i];
    fr(i, n) cin >> b[i];

    

    ll total__xor = 0;
    fr(i, n) total__xor ^= a[i];
    fr(i, n) total__xor ^= b[i];

    
    
    
    if (total__xor == 0) {
        cout << "Tie";
        nl;
        return;
    }

    
    int msb = 0;
    
    for (int k = 60; k >= 0; k--) {
        if ((total__xor >> k) & 1) {
            msb = k;
            break;
        }
    }


    int lastt_meaningful_idx = -1;
    fr(i, n) {
        ll bit_a = (a[i] >> msb) & 1;
        ll bit_b = (b[i] >> msb) & 1;
        if (bit_a != bit_b) {
            lastt_meaningful_idx = i;
        }
    }

    
    if (lastt_meaningful_idx % 2 == 0) {
        cout << "Ajisai";
    } else {
        cout << "Mai";
    }
    nl;
}

int main()
{
    FAST_IO;
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}