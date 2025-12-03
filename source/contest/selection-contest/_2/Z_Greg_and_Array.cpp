#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;
    int n, m, k;
    cin >> n >> m >> k;

    /// ----
    vector<ll> a(n + 2);
    for(int i = 1; i <= n; ++i) cin >> a[i];

    vector<tuple<int,int,ll>> ops(m + 1); 
    for(int i = 1; i <= m; ++i){
        int l,r;
        ll d;
        cin >> l >> r >> d;
        ops[i] = {l,r,d};
    }

    /// ----

    vector<ll> op_count(m + 2,0); 
    for(int i = 0; i < k; ++i){
        int x,y;
        cin >> x >> y;
        op_count[x] += 1;
        if(y+1 <= m) op_count[y+1] -= 1;
    }

    
    for(int i = 1; i <= m; ++i) op_count[i] += op_count[i-1];

    
/// ----    af


    vector<ll> diff(n + 2, 0);
    for(int i = 1; i <= m; ++i){
        auto [l,r,d] = ops[i];
        ll val = d * op_count[i];
        diff[l] += val;
        if(r+1 <= n) diff[r+1] -= val;
    }


    /// ----
    
    for(int i = 1; i <= n; ++i){
        diff[i] += diff[i-1];
        cout << a[i] + diff[i] << " ";
    }
    cout << "\n";
}
