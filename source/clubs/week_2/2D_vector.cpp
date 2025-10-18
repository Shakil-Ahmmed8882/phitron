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

    int n;
    cin >> n;

    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a; 
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x; 
            a.push_back(x); 
        }
        v.push_back(a); // push a vector in a vector 
    }


    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " " ; 
        }
        nl; 

    }

    return 0;
}
