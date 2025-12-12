#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    map<ll, ll> freq;  
    freq[0] = 1;




    ll prefix_sum = 0;
    ll count = 0;

    for (ll val : a) {
        prefix_sum += val;
        
        if (freq.count(prefix_sum - x))
            count += freq[prefix_sum - x];
        freq[prefix_sum]++;
    }

    cout << count << "\n";
}

int main() {
    FAST_IO;
    solve();
}
