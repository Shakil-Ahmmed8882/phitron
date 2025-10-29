

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

int main()
{
    FAST_IO;
    
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        
        vector<pair<ll, int>> v;
        v.reserve(n);
        
        
        
        for (int i = 0; i < n; ++i)
            v.emplace_back(a[i], i);
        sort(v.begin(), v.end()); 




        vector<ll> ans(n, 0);
        for (int i = 0; i < n; ++i)
        {
            ll val = v[i].first;
            

            if (i == 0)
            {
                ans[v[i].second] = -1;
                continue;
            }
            




            if (i == n - 1)
            {
                ans[v[i].second] = -1;
                continue;
            }
            ll left = v[i - 1].first;
            ll right = v[i + 1].first;
            
            ll L = (left + val) / 2 + 1;
            
            
            //
            ll R = (val + right) / 2;
            ll cnt = R - L + 1;
            if (cnt < 0)
                cnt = 0;
            ans[v[i].second] = cnt;
        }

        
        


        for (int i = 0; i < n; ++i)
        {
            if (i)
                cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}
