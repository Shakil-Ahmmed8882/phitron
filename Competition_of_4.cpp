#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n"
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int x;
    // ...
    if (cin >> x)
    {
        int p = 1000 * (1 << (4 - x));
        cout << p;
        nl;
    }
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
