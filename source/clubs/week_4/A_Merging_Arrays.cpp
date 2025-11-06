

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

    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int j = 0; j < m; ++j)
        cin >> b[j];

    vector<ll> merged;
    merged.reserve(n + m);

    int i = 0, j = 0;

    
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            merged.push_back(a[i]);
            ++i;
        }
        else
        {
            merged.push_back(b[j]);
            ++j;
        }
    }

    



    while (i < n)
        merged.push_back(a[i++]);

    while (j < m)
        merged.push_back(b[j++]);

    
    for (int k = 0; k < (int)merged.size(); ++k)
    {
        cout << merged[k] << (k + 1 == merged.size() ? '\n' : ' ');
    }
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
