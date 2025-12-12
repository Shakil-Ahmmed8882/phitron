#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> par(n + 1, 0);
    for (int i = 2; i <= n; i++)
        cin >> par[i];

    string s;
    cin >> s;

    // ..
    vector<bool> active(n + 1, false);
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            active[i + 1] = true;
    active[1] = active[n] = true;

    ///..
    int stnr_edge = 0;
    for (int i = n; i >= 2; i--)
    {
        if (active[i])
        {
            stnr_edge++;
            active[par[i]] = true;
        }
    }

    vector<int> spine;
    int curr = n;
    while (curr != 0)
    {
        spine.push_back(curr);
        curr = par[curr];
    }

    reverse(spine.begin(), spine.end());

    ///..
    int mx_gap = 0, last_idx = 0;

    for (int i = 0; i < spine.size(); i++)
    {
        int u = spine[i];
        bool is_end = (u == 1 || u == n || s[u - 1] == '1');

        if (!is_end)
            int next_on_spine = (i + 1 < spine.size()) ? spine[i + 1] : -1;
    }
    /// ..
    vector<int> active_degrees(n + 1, 0);
    for (int i = 2; i <= n; i++)
        if (active[i])
            active_degrees[par[i]]++;

    // . .
    for (int i = 0; i < spine.size(); i++)
    {
        int u = spine[i];
        bool is_end = (u == 1 || u == n || s[u - 1] == '1');

        int expected_spine_children = (u == n) ? 0 : 1;
        /// 
        if (active_degrees[u] > expected_spine_children)
            is_end = true;

        if (is_end)
        {
            mx_gap = max(mx_gap, i - last_idx);
            last_idx = i;
        }
    }
    cout << 2 * (stnr_edge - mx_gap) << "\n";
}

int main()
{
    FAST_IO
    int t;
    cin >> t;
    while (t--)
        solve();
}