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

    unordered_map<ll, int> freq;
    freq[0] = 1;

    ll prefix = 0, count = 0;




    for (ll v : a) {
        prefix += v;
        if (freq.count(prefix - x))
            count += freq[prefix - x];
        freq[prefix]++;
    }



    
    cout << count << "\n";
}

int main() {
    FAST_IO;
    solve();
}
