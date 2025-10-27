

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
    set<ll> s;


    for(int i = 0; i < q; i++) {
        int type;
        cin >> type;


        if(type == 1) {
            ll x;
            cin >> x;
            s.insert(x);

        } else if(type == 2) {
            ll x;
            cin >> x;
            s.erase(x);


        } else if(type == 3) {
            ll x;
            cin >> x;
            if(s.count(x)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }

        } else if(type == 4) {
            cout << s.size() << '\n';




        } else if(type == 5) {
            for(auto it = s.begin(); it != s.end(); ++it) {
                if(it != s.begin()) cout << " ";
                cout << *it;
            }
            
            cout << '\n';
        }
    }
    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
