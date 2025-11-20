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

    vector<int> p(n);
    fr(i, n) cin >> p[i];

    
    int current_minmum = n + 1; 
    bool possible = true;

    
    for (int i = 0; i < n - 1; ++i) {
        current_minmum = min(current_minmum, p[i]);
        int k = i + 1; 

        
        if (current_minmum == n - k + 1) {
            possible = false;
            break;
        }
    }

    if (possible) cout << "Yes";
    else cout << "No";
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