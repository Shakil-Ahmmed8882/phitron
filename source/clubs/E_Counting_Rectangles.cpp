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
    int n , q; 
    cin >> n >> q; 

    vector<vector<ll>> pre(1001, vector<ll>(1001, 0)); 

    for(int i =1; i <= n; i++){
        int h, w; 
        cin >> h >> w; 
        pre[h][w] += (1LL * h * w); 
    }
    
    for(int i = 1;  i <= 1000; i++){
        for(int j = 1;  j <= 1000; j++){
            pre[i][j] = pre[i][j] + pre[i -1][j] + pre[i][j - 1] - pre[i -1][j-1]; 
        }
    }

    while (q--)
    {
        int hs, ws, hb, wb; 
        cin >> hs >> ws >> hb >> wb; 

        
        hs++; 
        ws++; 
        hb--; 
        wb--;

        if(hs > hb || ws > wb){
            cout << 0 << "\n"; 
            continue;
        }

        cout << pre[hb][wb]
             - pre[hs - 1][wb]
             - pre[hb][ws - 1]
             + pre[hs - 1][ws - 1]
             << '\n';
    }
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
