

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
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 

    int i = 0, j = n -1, ans = n; 
    while (i <= j)
    {
        if(s[i] == s[j]){
            break; 
        }else{
            ans -= 2; 
            i++; 
            j--; 
        }
    }
    
    cout << ans << "\n";
}

int main()
{
    FAST_IO;
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }

    return 0;
}
