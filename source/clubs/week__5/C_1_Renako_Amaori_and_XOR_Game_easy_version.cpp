

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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    
    int total_xor_diffferences = 0;
    int last__diff_index = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            
            
            total_xor_diffferences ^= 1;
            last__diff_index = i;
        }
    }

    if (total_xor_diffferences == 0) {
        cout << "Tie\n";
        return;
    }

    if (last__diff_index % 2 == 0) {
        
        cout << "Ajisai\n";
    } else {
        
        cout << "Mai\n";
    } 

    
}

int main()
{
    FAST_IO;
    int t;
    cin >> t; 
    while (t--)
    {
        solve();
    }
    
    return 0;
}
