

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
    int a, b; 
    cin >> a >> b; 

    // a * b / __gcd(a,b); 
    // a / __gcd(a, b) * b; 
   
    cout << "GCD__" <<  __gcd(a, b) << "\n"; 
    cout << "LCM__" << (a / __gcd(a,b) * b) << "\n"; 

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
