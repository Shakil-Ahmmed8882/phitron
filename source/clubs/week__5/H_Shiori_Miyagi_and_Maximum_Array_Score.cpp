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

// Max value for m is 2*10^5, so slack fits in this range.
const int MAX_SLACK = 200005;
ll bit[MAX_SLACK];
int max_slack_limit;

// Update BIT with max value (Point Update, Prefix Max)
void update(int idx, ll val) {
    idx++; // Convert to 1-based indexing
    while (idx <= max_slack_limit + 1) {
        bit[idx] = max(bit[idx], val);
        idx += idx & (-idx);
    }
}

// Query max value in range [0, idx]
ll query(int idx) {
    idx++; // Convert to 1-based indexing
    ll res = 0;
    while (idx > 0) {
        res = max(res, bit[idx]);
        idx -= idx & (-idx);
    }
    return res;
}

void solve()
{
    int n, m;
    if (!(cin >> n >> m)) return;

    int K = m - n;
    max_slack_limit = K;

    // Reset BIT for the current test case
    // We only need to clear up to K + 1
    for (int i = 0; i <= K + 2; i++) bit[i] = 0;

    // Base Score:
    // We can always set a[i] = i. Since i is a multiple of i, v(i, a[i]) >= 1.
    // We sum this base 1 for all i from 2 to n.
    ll total_score = n - 1;

    // Iterate through indices 2 to n to find bonus opportunities
    for (int i = 2; i <= n; ++i) {
        vector<pair<int, ll>> updates;

        // Check powers i^2, i^3, ...
        // Use long long to prevent overflow during calculation
        ll p = (ll)i * i;
        int k = 2;

        while (true) {
            ll slack = p - i;
            
            // If slack exceeds the max allowed (m - n), higher powers will also fail.
            if (slack > K) break;

            // Query the best DP state from previous indices with slack <= current_slack
            ll prev_max = query((int)slack);
            
            // Calculate new potential score for this specific power
            // Bonus added is (k - 1) because the base 1 was already counted in total_score.
            ll bonus = k - 1;
            updates.push_back({(int)slack, prev_max + bonus});

            // Prepare next power: p = i^(k+1)
            // Check for overflow relative to m before multiplying
            if (m / i < p) break;
            p *= i;
            k++;
        }

        // Apply updates to the BIT *after* processing all options for the current i.
        // This ensures we strictly move from index i-1 (or earlier) to index i,
        // preserving the strict increasing nature of the array indices.
        for (auto& u : updates) {
            update(u.first, u.second);
        }
    }

    // The answer is the base score + the best bonus path ending with any valid slack
    cout << total_score + query(K);
    nl;
}

int main()
{
    FAST_IO;
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}