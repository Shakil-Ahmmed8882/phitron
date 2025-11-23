

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
    ll n, k;
    cin >> n >> k; 
    vector<ll> divisors;

    for (ll i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            divisors.push_back(i);
            if ((n / i) != i)
                divisors.push_back(n / i);
        }
    }
    sort(all(divisors)); 

    if(divisors.size() < k){
        cout << -1 << "\n"; 
    }else{
        cout << divisors[k -1] << "\n"; 
    }
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
