

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
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }


        sort(a.begin(), a.end());
        vector<pair<ll, int>> groups;
        int i = 0;



        while(i < n) {
            ll sz = a[i];
            int c = 0;
            while(i < n && a[i] == sz) {
                c++;
                i++;
            }
            groups.emplace_back(sz, c);
        }
        ll conn = 0;

        for(int g = 0; g + 1 < groups.size(); ++g) {


            if(groups[g + 1].first == groups[g].first + 1) {
                ll x = groups[g].second; 
                ll y = groups[g + 1].second;

                conn += min(x, y);
            }
        }


        ll ans = (ll)n - conn;
        cout << ans << '\n';
    
}

int main()
{
    FAST_IO;
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
