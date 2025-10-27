

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


   
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool possible = true;

        
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == '1' && s[i+1] == '1') {
                possible = false;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << '\n';
    }

    
    return 0;
}
