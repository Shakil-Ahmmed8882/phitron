

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
  cin>>n >> m;

  vector<int> a(n), b(m);
  for( int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  for( int i = 0; i < m; i++)
  {
      cin>>b[i];
  }

  int l =0, r = 0;
  ll ans = 0; 
  while (l < n && r < m)
  {
    int curr = a[l],  cnt1 = 0, cnt2 = 0; 
    while(l < n && a[l] == curr){
        cnt1++; 
        l++;
    }

    while (r < m && curr > b[r]){
        r++; 
    }
    {
        /* code */
    }
    

    while(r < m && b[r] == curr){
        cnt2++; 
        r++; 
    }
    ans+= (1LL * cnt1 * cnt2);
  }
  


    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}
