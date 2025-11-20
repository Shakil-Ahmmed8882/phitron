

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
    int n;
    cin >> n;
    vector<int> a(n);

    bool atleast_one_even = false;
    bool atleast_one_odd = false;

    for (auto &v : a)
    {
        cin >> v;
        if (v % 2 == 0)
        {
            atleast_one_even = true;
        }
        else
        {
            atleast_one_odd = true;
        }
    }

    if (atleast_one_even && atleast_one_odd)
    {
        sort(all(a));
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }

    cout << "\n";
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
