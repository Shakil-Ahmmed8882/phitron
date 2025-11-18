

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
    ll k;
    cin >> n >> k;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();

        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k)
                break;
                ml.erase(ml.find(a[l]));
                l++;
            }

            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k)
            {
               ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << "\n";
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
