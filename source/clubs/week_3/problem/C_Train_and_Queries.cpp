
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

        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO\n";
            }
            else
            {
                int startingStationLeftMostIndex, endingStationRightMostIndex;
                startingStationLeftMostIndex = *mp[l].begin();
                endingStationRightMostIndex = *mp[r].rbegin();
                if (startingStationLeftMostIndex <= endingStationRightMostIndex)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}
