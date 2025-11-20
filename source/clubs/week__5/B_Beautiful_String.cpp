

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
    string s;
    cin >> n >> s;
    vector<int> pos;

    
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '0')
        {
            pos.push_back(i);
        }
    }

    cout << pos.size() << "\n";
    for (int i = 0; i < pos.size(); i++)
    {
        cout << pos[i] << " ";
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
