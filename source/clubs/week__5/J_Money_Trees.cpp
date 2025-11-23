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
    if (!(cin >> n >> k)) return;
    vector<int> a(n);
    fr(i, n) cin >> a[i];

    vector<int> h(n);
    fr(i, n) cin >> h[i];

    ll curFirstFruit = 0;
    int left = 0;
    int max_len = 0;
    /// ...
    for (int right = 0; right < n; right++)
    {
        if (right > 0 && h[right - 1] % h[right] != 0)
        {
            left = right;
            curFirstFruit = 0;
        }
        curFirstFruit += a[right];
        while (curFirstFruit > k)
        {
            if (left <= right)
            {
                curFirstFruit -= a[left];
                left++;
            }
            else
                break; 
        }

        /// ..... 
        if (left <= right) 
            max_len = max(max_len, right - left + 1);
    }

    cout << max_len;
    nl;
}

int main()
{
    FAST_IO;
    int t;
    if (!(cin >> t)) return 0; 
    while (t--)
    {
        solve();
    }
    return 0;
}