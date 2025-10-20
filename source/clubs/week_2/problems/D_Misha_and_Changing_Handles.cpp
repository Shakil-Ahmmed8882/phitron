

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

    map<string, string> ans, has;

    
    for(int i = 1; i <= n; i++){
        
        string name, value;
        cin >> name >> value;
        if (has.find(name) != has.end())
        {
            string old = has[name];
            ans[old] = value;
            has.erase(name);
            has[value] = old;
        }
        else
        {
            ans[name] = value;
            has[value] = name;
        }
    
    }


    cout << ans.size() << "\n";
    for (auto [x, y] : ans)
    {
        cout << x << " " << y << "\n";
    }

    return 0;
}
