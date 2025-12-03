#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void f()
{
    int n;
    ll c;
    cin >> n >> c;
    vector<ll> a(n);
    // innput s ...
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    cin >> s;
    ll sm0 = 0, sm1 = 0;

    /// ..
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            sm0 += a[i];
        else
            sm1 += a[i];
    }

    // ...
    ll ans = sm0;
    if (sm0 >= c)
        ans = max(ans, sm0 - c + sm1);

    cout << ans << "\n";
}
int main()
{
    FAST_IO
    int t;
    
    if (cin >> t)
        while (t--)
            f();
    return 0;
}
