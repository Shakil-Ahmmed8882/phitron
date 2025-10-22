



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO  ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO; 


    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1); 

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    set<int> st; 
    vector<int> ans(n+1); 
    for(int i = n; i >= 1; i--){
        st.insert(a[i]); 
        ans[i] = st.size(); 
    }

    for(int i = 1; i <= m; i++){
        int pos; 
        cin >> pos; 
        cout << ans[pos] << "\n"; 
    }


    
    return 0;
}
