

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

        /// 1 
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }




        vector<vector<int>> pos(n + 1);
        for(int i = 1; i <= n; i++) {
            pos[a[i]].push_back(i);
        }



        /// //// 2



        vector<int> pointer(n + 1, -1);
        multiset<int> lasts;
        set<int> active;




        //// / 3
        for(int x = 1; x <= n; x++) {
            if(!pos[x].empty()) {
                pointer[x] = pos[x].size() - 1;
                lasts.insert(pos[x].back());
                active.insert(x);
            }
        }


        // 4
        int ans = 0;
        int cur_right = n;
        while(true) {
            if(lasts.empty() || *lasts.begin() > cur_right) break;
            int minl = *lasts.begin();
            ans++;

            ///// 5
            set<int> to_rem;
            for(auto x : active) {

                /// 6
                int old_posi = pos[x][pointer[x]];
                lasts.erase(lasts.find(old_posi));
                pointer[x]--;

                //// /// 7 
                if(pointer[x] >= 0) {
                    int np = pos[x][pointer[x]];
                    lasts.insert(np);
                } else {
                    to_rem.insert(x);
                }
            }

            // / // 
            for(auto x : to_rem) {
                active.erase(x);
            }
            cur_right = minl - 1;
            if(cur_right < 1) break;
        }
        cout << ans << '\n';

    
}

int main()
{
    FAST_IO;
    int t; 
    if (!(cin >> t)) return 0;
    while (t--){

        solve();
    }
    return 0;
}
