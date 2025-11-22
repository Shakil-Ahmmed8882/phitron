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
    
    string x;
    cin >> x;

    char min_digit = '9'; 

    for (char c : x)
    {
        if (c < min_digit)
        {
            min_digit = c;
        }
    }

    cout << min_digit;
    nl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t; 
    while (t--)
    {
        solve();
    }
    return 0;
}