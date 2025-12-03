#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll actuals_n;
ll R;

void DFS(ll N_rem, ll current_sum, ll min_factor)
{

    // ... base for  final factor
    if (N_rem >= min_factor && N_rem >= 2)
    {
        ll final_sum = current_sum + N_rem;

        // already chosen ..
        if (actuals_n >= final_sum)
        {
            R++;
        }
    }

    ///. .
    for (ll d = min_factor; d * d <= N_rem; ++d)
    {
        if (N_rem % d == 0)
        {

            //..
            DFS(N_rem / d, current_sum + d, d);
            ll d_prime = N_rem / d;

            ///
            if (d_prime != d && d_prime >= 2)
            {
                DFS(d, current_sum + d_prime, d_prime);
            }
        }
    }
}

void solve()
{
    cin >> actuals_n;

    R = 0;
    if (actuals_n == 1)
    {
        cout << 1;
        nl;
        return;
    }
    //..
    DFS(actuals_n, 0, 2);

    cout << R;
    nl;
}

int main()
{
    FAST_IO;

    int T;
    if (cin >> T)
    {
        while (T--)
        {
            solve();
        }
    }

    return 0;
}