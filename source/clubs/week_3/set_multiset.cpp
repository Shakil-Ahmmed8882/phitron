

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    FAST_IO;

    int n;
    cin >> n;

    set<int> s;
    s.insert({100, 70, 32, 20, 40, 20, 70, 200, 99});

    for (auto it : s)
        cout << it << " ";

    nl;
    cout << "____________________";
    nl;
    // auto it = s.begin();
    // it++;
    // it++;
    // auto it = --s.end();
    // cout << *it;

    // auto it = s.find(20); // o(logn); get targeted element
    // if(it != s.end()){
    //     cout << "Found\n";
    //     s.erase(it); // o(logn)
    // }else{
    //     cout << "Not Found\n";
    // }

    // nl;
    // dbg(s.size());
    nl;

    nl;
    dbg(s.count(80));
    nl;
    if(s.count(20)){
        cout << "Found\n";
    }else{
        cout << "Not Found\n";
    }

    s.clear(); 
    
    nl;
    dbg(s.empty());
    nl;

    for (auto it : s)
        cout << it << " ";
    nl;
    cout << "____________________";
    nl;


    auto it = s.upper_bound(40);
    dbg(*it); 
    it = s.lower_bound(40);
    dbg(*it); 
    



    return 0;
}
