

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

int main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        ll seven = 0, sodd = 0;

        
        for (int i = x; i <= y; i += x)
        {
            if (i % 2 == 0)
                seven += i;
            else
                sodd += i;
        }

        if (seven >= sodd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
