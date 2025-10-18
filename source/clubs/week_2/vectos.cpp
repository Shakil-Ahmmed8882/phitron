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

    vector<int> v;
    v.assign({10, 40, 30, 20});
    // v.push_back(5);
    // v.push_back(80);
    // v.push_back(105);
    // v.push_back(59);
    // v.pop_back();  // o(1)
    // v.pop_back(); // o(1)

    // sort(v.begin(), v.end());


    // cout << v.front() << " ";
    // cout << v.back();
    // nl;
    // cout <<"--> empty: "<< v.empty() << " ";
    // nl;
    // cout <<"--> size: "<< v.size();
    // nl;
    // v.clear();
    // nl;
    // cout <<"--> size after clear: "<< v.size();

    // nl;
    // cout << "--> size: " << v.size();
    // nl;
    // v.resize(50, 5);
    // nl;
    // cout << "--> size after resize: " << v.size();

    // auto begin_iterator = v.begin();
    // cout << "*begin_iterator-" << *begin_iterator;
    // auto end_iterator = --v.end();
    // --end_iterator;
    // --end_iterator;
    // --end_iterator;
    // --end_iterator;
    // nl;
    // cout << "*end_iterator- " << *end_iterator;


    // sort(v.rbegin(), v.rend()); 
    // sort(v.begin(), v.end()); 
    // reverse(v.begin(), v.end());


    
    
    for(auto x: v){
        cout << x << " ";
    }

    nl;
    cout << "___________________________________ ";
    nl;

    // auto min_element_position = v.begin () - min_element(v.begin(), v.end()); 
    // auto max_element_position = 0 + max_element(v.begin(), v.end()); 
    // cout << *max_element_position;

    

    return 0;
}
