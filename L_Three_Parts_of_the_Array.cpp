

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
    vector<ll> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];

    ll left_sum = 0, right_sum = 0, ans = 0;
    int l = 0, r = n - 1;

    while (l <= r)
    {


        if (left_sum == right_sum)
        {
            ans = left_sum; 
            left_sum += d[l++];
        }

        
        else if (left_sum < right_sum)
        {
            left_sum += d[l++];
        }
        else
        {
            right_sum += d[r--];
        }
    }

    
    if (left_sum == right_sum)
        ans = max(ans, left_sum);

    cout << ans << "\n";
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
