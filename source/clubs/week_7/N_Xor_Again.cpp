#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    
    ll ans = 0;
    ll val;
    
    for(int i = 0; i < n; i++) {
        cin >> val;
        ans ^= (2 * val);
    }
    
    cout << ans << "\n";
}

int main()
{
    FAST_IO;
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}