

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

    

    // input
    int t;
    cin >> t;

    while (t--)
    {
        map<int, int> mp; 
        int n; 
        cin >> n; 
        int a[n]; 
        fr(i, n){
            cin >> a[i]; 
            mp[a[i]]++;
        }

        if(mp.size() > 2) cout << "No\n"; 
        else{

            if(mp.size() == 2){
                vi v;
                for(auto p: mp){
                    v.push_back(p.second);
                }

                if(abs(v[0] - v[1]) > 1) cout << "No\n";
                else cout << "Yes\n";

            }else cout << "Yes\n";
        }
    }
    

    
    return 0;
}
