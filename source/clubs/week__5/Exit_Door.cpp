#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void solve()
{
    int N; 
    
    
    if (!(cin >> N)) return; 

    vector<int> P(N);
    vector<int> current_row; 

    fr(i, N) {
        if (!(cin >> P[i])) return;
        current_row.push_back(P[i]);
    }

    ll td = 0;

    
    for (int priority = N; priority >= 1; --priority) {
        
        
        auto it = find(current_row.begin(), current_row.end(), priority);
        
        if (it == current_row.end()) {
            
            continue; 
        }

        
        int current_indexx = distance(current_row.begin(), it);
        
        int current_size = current_row.size();
        
        int disturb_left = current_indexx;

        int disturb_right = current_size - 1 - current_indexx;

        int min_disturb = min(disturb_left, disturb_right);

        td += min_disturb;

        current_row.erase(it); 
    }

    
    cout << td << "\n";
    
    
    
}

int main()
{
    FAST_IO;
    
    
    int T;
    if (!(cin >> T)) return 0;
    
    
    while (T--) {
        solve();
    }
    
    return 0;
}