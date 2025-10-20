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

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<string> chats;
    unordered_map<string, list<string>::iterator> pos;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (pos.count(name))
        {
            chats.erase(pos[name]); 
        }
        chats.push_front(name);    
        pos[name] = chats.begin(); 
    }

    for (auto &x : chats)
        cout << x << "\n";

    return 0;


}
