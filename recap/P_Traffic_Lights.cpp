

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
 
    
        ll x;
    int n;
    cin >> x >> n;
    set<ll> lights;
    lights.insert(0);
    lights.insert(x);
    multiset<ll> gaps;
    gaps.insert(x);



    for(int i = 0; i < n; i++) {
        ll p;
        cin >> p;
        auto it = lights.lower_bound(p);
        auto r = it;
        auto l = prev(it);
        ll oldg = *r - *l;




        
        gaps.erase(gaps.find(oldg));
        lights.insert(p);
        ll new1 = p - *l;
        ll new2 = *r - p;
        gaps.insert(new1);
        gaps.insert(new2);
        cout << *gaps.rbegin() << " ";
    }

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
