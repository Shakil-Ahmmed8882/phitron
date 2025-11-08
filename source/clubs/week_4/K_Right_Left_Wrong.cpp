#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    // Read N (length of the strip)
    if (!(cin >> n))
        return;

    // Use long long for a_i values (up to 10^9) and the score (up to 2*10^5 * 10^9)
    vector<ll> a(n); 
    
    // Read the numbers a_i
    fr(i, n)
    {
        cin >> a[i];
    }
    
    string s;
    // Read the string s (R, L, or W)
    cin >> s;

    // -------------------------------------
    
    // Calculate the maximum score
    ll max_score = 0;
    
    // The maximum score is the sum of all a[i] corresponding to 'R' or 'L'.
    // This is the optimal greedy strategy because all a_i are positive,
    // and every 'R' or 'L' can be included in exactly one operation.
    fr(i, n)
    {
        if (s[i] == 'R' || s[i] == 'L') {
            max_score += a[i];
        }
    }

    cout << max_score << "\n";
}

int main()
{
    FAST_IO;
    
    int t;
    // Read the number of test cases (T)
    if (!(cin >> t))
        return 0;
        
    while (t--)
    {
        solve();
    }
    return 0;
}