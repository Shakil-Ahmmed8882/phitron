#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k;
    /// ..
    if (!(cin >> n >> k))
        return;
    string s;
    cin >> s;

    //.. count 0
    int n0 = count(s.begin(), s.end(), '0');
    int n1 = n - n0;
    int q = n / k;
    int r = n % k;
    int od = 0;

    // .. . evn length
    if (q % 2 != 0)
        od = k - r;
    else
        od = r;
    int d = abs(n0 - n1);
    //
    if (d <= od)
        cout << "Yes", nl;
    else
        cout << "No", nl;
}

int main()
{
    FAST_IO

    int t;
    if (cin >> t)
        while (t--)
            solve();
        
    return 0;
}
