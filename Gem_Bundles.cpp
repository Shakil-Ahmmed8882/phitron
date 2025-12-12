#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll r, b, g;
    cin >> r >> b >> g;
    //..

    ll m = min({r, b, g});
    ll t = r + b + g;
    ll left = t - m * 3;
    ll ans = m * 10 + left * 3;

    //.. ..
    cout << ans;
    nl;
}

int main()
{
    FAST_IO;
    int tt;
    //..
    if (cin >> tt)
    {
        while (tt--)
        {
            solve();
        }
    }
    return 0;
}
