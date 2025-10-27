

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
    
    

     int n, q;
    cin >> n >> q;
    multiset<long long> s;


    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }


    for(int i = 0; i < q; i++) {
        int type;
        cin >> type;


        if(type == 0) {
            long long x;
            cin >> x;
            s.insert(x);


        } else if(type == 1) {
            auto it = s.begin();
            cout << *it << '\n';
            s.erase(it);

            
        } else if(type == 2) {
            auto it = s.end(); --it;
            cout << *it << '\n';
            s.erase(it);
        }
    }

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
