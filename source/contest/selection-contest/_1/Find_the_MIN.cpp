#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    if (!(cin >> Q))
        return 0;

    map<ll, ll> freq;
    while (Q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            ll x;
            cin >> x;
            ++freq[x];
        }
        else if (type == 2)
        {
            if (freq.empty())
            {
                cout << "empty\n";
            }
            else
            {
                auto it = freq.begin();
                cout << it->first << '\n';
                freq.erase(it);
            }
        }
        else if (type == 3)
        {
            if (!freq.empty())
            {
                cout << freq.begin()->first << '\n';
            }
        }
    }

    return 0;
}
