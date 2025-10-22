

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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;

        for (auto [value, count] : mp)
        {
            pq.push(count);
        }

        while (pq.size() >= 2)
        {

            if (pq.size() < 2)
            {
                break;
            }

            int value_1, value_2;
            value_1 = pq.top();
            pq.pop();
            value_2 = pq.top();
            pq.pop();

            value_1--;
            value_2--;
            if (value_1 > 0)
            {
                pq.push(value_1);
            }
            if (value_2 > 0)
            {
                pq.push(value_2);
            }
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << "\n";
    }

    return 0;
}
