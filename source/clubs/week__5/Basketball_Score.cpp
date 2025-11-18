#include <iostream>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    
    int X, Y;
    
    if (!(cin >> X >> Y)) return;

    int total_score = (X * 3) + (Y * 2);
    cout << total_score << "\n";
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}