
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



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vll a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    map<ll, pair<int,int>> mp;

    for (int i = 0; i < n; i++) {
        if (mp.find(a[i]) == mp.end()) {
            mp[a[i]] = {i+1, i+1}; 
        } else {
            mp[a[i]].second = i+1; 
        }
    }

    
    for (auto p : mp) {
        cout << p.first << " " << p.second.first << " " << p.second.second << "\n";
    }

    return 0;
}
