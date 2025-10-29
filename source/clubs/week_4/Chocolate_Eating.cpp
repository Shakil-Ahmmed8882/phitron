

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
    ll milk, dark;

    if (!(cin >> milk >> dark)) {
        return;
    }

    ll max_satisfaction;
    

    if (milk == dark) {
        max_satisfaction = milk + dark - 1; 
        
        
    } else {
        max_satisfaction = milk + dark;
    }

    cout << max_satisfaction << "\n";
}

int main()
{
    FAST_IO;
    
    int t;
    if (!(cin >> t)) {
        return 0;
    }

    while (t--) {
        solve();
    }

    return 0;
}