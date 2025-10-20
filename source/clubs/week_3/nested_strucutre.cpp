

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


    // map<vector<int>, int> mp; 
    // vector<int> a; 
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(6);
    // a.push_back(7);
    
    // mp[a] = 1; 
     
    
    // for(auto it: mp){
    //     vector<int> v = it.first; 
    //     fr(i, v.size()){
    //         cout << v[i] << " ";
    //     }
    // }


    map<int , set<int>> mp; 

    set<int> s1; 
    s1.insert({1,2,3,4});
    set<int> s2; 
    s2.insert({5,6, 7, 8});
    set<int> s3; 
    s3.insert({9, 10, 12 , 13, 14, 15});

    mp[9] = s1; 
    mp[11] = s2; 
    mp[19] = s3;

    for(auto it: mp){
        
        cout << it.first<< " -> "; 
        for(auto x: it.second){
            cout << x << " "; 
        }
        nl; 
    }

    cout << " ____________________________ " << "\n"; 

    auto it = mp.lower_bound(12); 
    auto lower_set = it->second;
    auto set_it = lower_set.lower_bound(11); 

    cout << *set_it << " ";






    
    return 0;
}
