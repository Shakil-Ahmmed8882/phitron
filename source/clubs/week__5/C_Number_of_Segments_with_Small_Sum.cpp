

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
    vector<int> a(n);
  
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll sum = 0, ans = 0;

    while (r < n)
    {
        sum += a[r];

        if (sum <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > k && l <= r)
            {
                sum -= a[l];
                l++;
            }

            if (sum <= k)
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
