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

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> gain(n);
        ll total = 0;

        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                total += i; 
                gain[i] = (ll)(n - 1 - i) - i; 
            } else { // 'R'
                total += (n - 1 - i); 
                gain[i] = i - (ll)(n - 1 - i); 
            }
        }

        sort(gain.rbegin(), gain.rend());

        
        ll curr = total;
        for (int i = 0; i < n; i++) {
            if (gain[i] > 0) curr += gain[i];
            cout << curr << " ";
        }
        cout << "\n";
    }

    
    return 0;
}
