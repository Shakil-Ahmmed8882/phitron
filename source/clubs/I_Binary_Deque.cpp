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
    int s;
    if (!(cin >> n >> s))
        return;

    vector<int> a(n);
    fr(i, n) cin >> a[i];

    ll current_sum = 0;
    int left = 0;
    int max_len = -1;

    // ..
    for (int right = 0; right < n; right++)
    {
        current_sum += a[right];
        while (current_sum > s)
        {
            current_sum -= a[left];
            left++;
        }
        if (current_sum == s)
            max_len = max(max_len, right - left + 1);
    }
    // ..... 
    if (max_len == -1)
        cout << -1;
    else
        cout << n - max_len;
    nl;
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