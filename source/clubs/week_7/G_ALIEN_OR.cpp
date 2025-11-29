

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
    cin >> n >> k;
    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = true;
    }

    string s;
    for (int i = 0; i < k; i++)
        s.push_back('0');

    for (int i = 0; i < k; i++)
    {
        s[i] = '1';
        if (!mp[s])
        {
            cout << "NO" << "\n";
            return;
        }
        s[i] = '0';
    }
    cout << "YES" << "\n";
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
