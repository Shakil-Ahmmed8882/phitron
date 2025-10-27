

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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<ll> pq;
    ll ans = 0;
    for (ll x : a)
    {
        if (x > 0)
        {
            pq.push(x);
        }
        else
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
    }
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
