

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
    multiset<long long> tickets;
    for(int i = 0; i < n; i++) {
        long long h;
        cin >> h;
        tickets.insert(h);
    }



    for(int i = 0; i < m; i++) {
        
        long long t;
        cin >> t;
        auto it = tickets.upper_bound(t);

        if(it == tickets.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
