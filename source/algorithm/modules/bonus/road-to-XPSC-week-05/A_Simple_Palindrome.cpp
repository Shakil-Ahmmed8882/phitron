

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
#define vc vector<char>
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

        int n; 
        cin >> n; 
        vc v = {'a', 'e', 'i', 'o', 'u'}; 
        string ans; 

        int i = 0; 
        while(n--){

            ans+= v[i]; 
            i++; 
            if(i == 5) i = 0; 
        }

        sort(ans.begin(), ans.end()); 
        cout << ans << endl; 


    }

    return 0;
}
