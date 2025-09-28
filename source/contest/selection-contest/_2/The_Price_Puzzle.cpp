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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];



    const int MAX_SUM = 200000;

    // DP:
    vector<int> possible(MAX_SUM + 1, 0);
    possible[0] = 1; 

    for (int i = 0; i < n; i++) {
        int p = prices[i];
        for (int s = MAX_SUM; s >= p; s--) {
            if (possible[s - p]) possible[s] = 1;
        }
    }



    // prefixss sum
    vector<int> prefix(MAX_SUM + 1, 0);
    for (int i = 1; i <= MAX_SUM; i++) {
        prefix[i] = prefix[i - 1] + possible[i];
    }






    int q;
    cin >> q;
    while (q--) {
        int L, R;
        cin >> L >> R;
        if (L > MAX_SUM) {
            cout << 0 << "\n";
        } else {
            R = min(R, MAX_SUM);
            int ans = prefix[R] - prefix[L - 1];
            cout << ans << "\n";
        }
    }

    return 0;
}


