

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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int min_repaints = k; 

    int current_repaints = 0;
    for (int i = 0; i < k; ++i)
    {
        if (s[i] == 'W')
        {
            current_repaints++;
        }
    }


    min_repaints = min(min_repaints, current_repaints);

    for (int i = 1; i <= n - k; ++i)
    {
        
        if (s[i - 1] == 'W')
        {
            current_repaints--;
        }

        if (s[i + k - 1] == 'W')
        {
            current_repaints++;
        }

        min_repaints = min(min_repaints, current_repaints);
    }

    cout << min_repaints << "\n";
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
