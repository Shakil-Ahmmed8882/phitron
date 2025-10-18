#include <bits/stdc++.h>
using namespace std;

#define ll long long
// int vector
#define vi vector<int>
#define vvi vector<vi>

// long long vector
#define vll vector<ll>
#define vvl vector<vll>
// bool vector
#define vb vector<bool>
#define vvb vector<vb>
// char vector
#define vc vector<char>

// loops, new line, debug, sort, unique
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(all(v))
#define unq(v) v.resize(distance(v.begin(), unique(all(v))))

int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {

        int n, m = 3;
        cin >> n >> m;

        map<string, vector<int>> mp;
        fr(i, m)
        {
            fr(i, n)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(m + 1);
        for (auto [x, y]: mp)
        {
         vector<int> v = y; 
         if(v.size() == 1){
            ans[0] += 3;
         }
         if(v.size() == 2){
            ans[v[0]]++; 
            ans[v[1]]++;
         }
        }
    }

    return 0;
}
