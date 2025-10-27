

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
      int q;
        cin >> q;
        map<int, multiset<ll>> mp;


        for(int i = 0; i < q; i++) {
            int type;
            cin >> type;


            if(type == 0) {
                int a;
                ll b;
                cin >> a >> b;
                mp[a].insert(b);


            } else if(type == 1) {
                int a;
                cin >> a;

                if(!mp[a].empty()) {

                    auto it = mp[a].end(); --it;
                    cout << *it << '\n';
                    mp[a].erase(it);

                    if(mp[a].empty()) {
                        mp.erase(a);
                    }
                }





            } else if(type == 2) {
                int a;
                cin >> a;
                if(!mp[a].empty()) {

                    auto it = mp[a].begin();
                    mp[a].erase(it);
                    
                    if(mp[a].empty()) {
                        mp.erase(a);
                    }
                }
            }
        } 

    
}

int main()
{
    FAST_IO;

    
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
