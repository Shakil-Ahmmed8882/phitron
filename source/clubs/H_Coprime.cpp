

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int max_val = 1000;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


int main()
{
    FAST_IO;
    int t;
    
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
    if (!(cin >> n)) return 0;
    vector<int> max_index(max_val + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        
        max_index[val] = i; 
    }

    // ...
    ll max_sum = -1; 
    for (int v1 = 1; v1 <= max_val; ++v1) {
        for (int v2 = 1; v2 <= max_val; ++v2) {
            if (max_index[v1] > 0 && max_index[v2] > 0) {
                if (gcd(v1, v2) == 1) {
                    ll current_sum = (ll)max_index[v1] + max_index[v2];
                    max_sum = max(max_sum, current_sum);
                }
            }
        }
    }    
    cout << max_sum << "\n";
    }
    return 0;
}