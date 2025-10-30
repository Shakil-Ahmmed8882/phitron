

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
    map<int, int> d; 
    for (int i = 1; i <= n; i++)
    {
        int l , r; 
        cin >> l >> r; 
        d[l]++; 
        d[r + 1]--; 
    } 

    long long sum = 0; 
    bool flag = false;

    for(auto [key, value]: d){
        sum += value;
        if(sum > 2){
            flag = true; 
            break;
        }
    }

    if(flag){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
