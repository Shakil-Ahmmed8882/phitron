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
#define frc(i, n) for (char i = 0; i < (n); i++)
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

    /*
        ==================== QUICK SELF-CHECK ====================
        1.Read the problem fully; never skip details.
        2.constraints & Notes
        3.test cases.
        4. Stuck? take small input & output -> draw & collect logics.

        5. passed?  review again:
           - problem
           - desired
           - output
           - complexity
        ========================================================
        */

    // input
    string s;
    cin >> s; 
    stack<char> st; 

    // test input
    frc(i, sz(s))
    {
        st.push(s[i]); 
        
    }
    frc(i, sz(s))
    {

        cout << st.top() << " ";
        st.pop();
        
    }

    
    return 0;
}
