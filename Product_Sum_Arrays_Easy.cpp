#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll actuals_n; 
ll r;         

void dfs(ll n_rem, ll curr_sum, ll min_factor)
{
    // ..
    if (r >= 3)
        return;
    // ... base for   final factor
    if (n_rem >= min_factor && n_rem >= 2)
    {
        ll final_sum = curr_sum + n_rem;
        // already chosen ..
        if (actuals_n >= final_sum)
        {
            r++;
        }
    }


    
    if (r >= 3)
        return;

    ///
    for (ll d = min_factor; d * d <= n_rem; ++d)
    {
        if (n_rem % d == 0)
        {

            /// ..
            dfs(n_rem / d, curr_sum + d, d);
            if (r >= 3)
                return;

            ll d_prime = n_rem / d;

            //
            if (d_prime != d && d_prime >= 2)
            {
                dfs(d, curr_sum + d_prime, d_prime);
                if (r >= 3)
                    return;
            }
        }
    }
}

void solve()
{

    cin >> actuals_n;
    r = 0;
    // .
    if (actuals_n == 1)
        r = 1;
    else
        dfs(actuals_n, 0, 2);

    cout << min((ll)3, r);
    nl;
}

int main()
{
    FAST_IO;

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}