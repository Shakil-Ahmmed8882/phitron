



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
    vector<int> a(n); 

    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }; 


    vector<int> d(n+1); 

    for(int i = 0;  i < q; i++){
        int l, r; 
        cin >> l >> r; 
        l--; 
        r--; 
        d[l]++; 
        d[r + 1]--; 
    }
    

    for(int i =1 ; i <= n; i++){
        d[i] = d[i - 1] + d[i]; 
    }

    sort(a.rbegin(), a.rend()); 
    sort(d.rbegin(), d.rend()); 

    long long ans = 0; 

    for(int i = 0; i < n; i++){
        ans += (1LL * a[i] * d[i]);
    }

    cout << ans << "\n";


}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
