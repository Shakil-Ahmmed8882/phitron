

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


void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<string, ll> full;
        map<string, ll> mask;

        for (int i = 0; i < n; i++) {
            string str = arr[i];

            full[str]++;

            string mask1 = "*" + str.substr(1,1);
            string mask2 = str.substr(0,1) + "*";

            mask[mask1]++;
            mask[mask2]++;
        }




        ll result = 0;

        for (int i = 0; i < n; i++) {
            string str = arr[i];

            string mask1 = "*" + str.substr(1,1);
            string mask2 = str.substr(0,1) + "*";

            ll count1 = mask[mask1] - full[str];
            ll count2 = mask[mask2] - full[str];

            result += count1 + count2;
        }

        
        cout << result / 2 << "\n";
    }
}

int main() {
    FAST_IO; 
    
        solve();
    return 0;
}