


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
    vector<int>  a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }


    int l = 0, r = 0, cnt = 0; 

    while (r < m)
    {
        if(l < n && a[l] < b[r]){
            l++; 
            cnt++;
        }else{
            cout << cnt << " ";
            r++; 
        }
    }
    



}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
