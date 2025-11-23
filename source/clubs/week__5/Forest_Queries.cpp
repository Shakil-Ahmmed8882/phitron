// https://cses.fi/problemset/submit/1652/



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
    vector<vector<ll>> pre(n + 1, vector<ll>(n + 1, 0));

    // ll a[n + 1][n + 1];  
    // memset(a, 0, sizeof(a));

    string s[n]; 
    for(int i = 0; i < n;  i++){
        cin >> s[i]; 
    }
    
    for(int i = 0; i < n; i++){
        for(int j =  0; j < n; j++){
            pre[i + 1][j + 1] = s[i][j] == '*'; 
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            pre[i][j] = pre[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j -1]; 
        }
    }


    while (q--)
    {
        int x1, x2, y1, y2; 
        cin >> x1 >> y1 >> x2 >> y2; 
        cout << pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] << "\n";
    }
    
    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
