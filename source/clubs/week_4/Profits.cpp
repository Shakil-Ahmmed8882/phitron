
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

    ll N, X; 


    if (!(cin >> N >> X)) {
        return;
    }

    ll max_profit = 0;

    for (ll i = 1; i <= N; ++i) {

        if (i >= X) {
            max_profit += (i - X);
        }
    }

    
    cout << max_profit << "\n";
}

int main()
{
    FAST_IO;
    
    
    int T;
    if (!(cin >> T)) {
        return 0; 
    }

    
    while (T--) {
        solve();
    }

    return 0;
}



