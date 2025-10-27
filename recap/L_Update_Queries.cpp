

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
        string s;
        cin >> s;
        vector<int> ind(m);

        for(int i = 0; i < m; i++) {
            cin >> ind[i];
        }

        string chars;
        cin >> chars;
        assert((int)chars.size() == m);
        vector<bool> updated(n + 1, false);

        for(int x : ind) {
            updated[x] = true;
        }

        vector<int> ups;
        for(int i = 1; i <= n; i++) {
            if(updated[i]) {
                ups.push_back(i);
            }
        }

        sort(chars.begin(), chars.end());
        string ans = s;
        int k = ups.size();
        
        for(int i = 0; i < k; i++) {
            ans[ups[i] - 1] = chars[i];
        }
        cout << ans << '\n'; 

    
}

int main()
{
    FAST_IO;
    int t;
    if (!(cin >> t))
        return 0;
    while (t--){
        solve();
    }
    return 0;
}
