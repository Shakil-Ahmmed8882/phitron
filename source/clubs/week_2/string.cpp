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

    string s;

    for (int i = 0; i < 3; i++)
    {
        cin >> s;
    }

    

    for (auto x : s)
    {
        cout << x << " ";
    }

    nl;
    cout << "___________________________________ ";
    nl;
    
    
    // cout << s.front();
    // nl;
    // cout << s.back();
    // nl;
    // cout << s.size(); 
    // nl;
    // cout << s.empty();
    // nl;
    // s.clear(); 
    // nl;
    // cout << s.size(); 
    // nl;
    // nl;
    // cout << s.empty();
    // nl;

    s.pop_back(); 

    string s1 = s.substr(5, 3); // start index, length
    cout << s1 << "\n";
    string s2 = s.substr(0, 5); // start index, length
    cout << s2 << "\n";
    string s3 = s.substr(); // start index, length
    cout << s3 << "\n";

    return 0;
}
