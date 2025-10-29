

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
    
    
        int A, B;
    if (!(cin >> A >> B)) {
        return;
    }


    
    ll lines_per_page = 100; 

    ll total_lines = lines_per_page * A * B;

    
    cout << total_lines << "\n"; 

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
