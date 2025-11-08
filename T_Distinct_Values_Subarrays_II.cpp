#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    
    map<ll, int> freq;
    int l = 0;
    ll count = 0;
    int distinct = 0;




    for (int r = 0; r < n; ++r) {
        freq[a[r]]++;
        if (freq[a[r]] == 1) distinct++;

        while (distinct > k) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) distinct--;
            l++;
        }



        count += (r - l + 1);
    }

    cout << count << "\n";
}

int main() {
    FAST_IO;
    solve();
}
