

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
    int t; 
    if (!(cin >> t))
        return;

    while (t--)

    {
        int n; 
        cin >> n;

  
        if (n % 2 != 0)

        {
            cout << 0;
        }
        else
        {

            int max_cows = n / 4;
            int configurations = max_cows + 1;

            cout << configurations;
        }

        nl;
    }
}
int main()
{
    FAST_IO;
    solve();
    return 0;
}
