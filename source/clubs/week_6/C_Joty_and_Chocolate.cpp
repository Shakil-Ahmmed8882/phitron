

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

ll GCD (ll a, ll b){
    return __gcd(a,b); 
}
ll LCM(ll a, ll b){
    return ( a / __gcd(a, b)) * b; 
}


void solve()
{
     

    ll n, a, b, p, q; 
    cin >> n >> a >> b >> p >> q; 
    ll cnt1 = (n / a) * p , cnt2 = (n / b) * q, overlap = ( n/ LCM(a, b)); 
    ll ans = (( cnt1 + cnt2) - (overlap * (p + q))) + (overlap * max(p, q)); 

    cout << ans << "\n"; 
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
