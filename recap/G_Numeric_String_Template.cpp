

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()

#define FAST_IO                       
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    

void solve() {
    int n;
    
    if (!(cin >> n)) return;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    
    cin >> m;

    while (m--) {
        string s;
        cin >> s;

        
        if (a.size() != s.size()) {
            cout << "NO\n";
            continue;
        }

        
        
        // numberr to charater 
        // & charater to number
        map<int, char> nc; 
        map<char, int> cn; 
        
        bool match = true;

        for (int i = 0; i < n; i++) {
            
            int current_num = a[i];
            char current_char = s[i];

            
            
            if (nc.count(current_num)) {
                
                if (nc[current_num] != current_char) {
                    match = false;
                    break;
                }
            } else {



                nc[current_num] = current_char;
            }
            
            
            if (cn.count(current_char)) {
                
                if (cn[current_char] != current_num) {
                    match = false;
                    break;
                }
            } else {
                
                cn[current_char] = current_num;
            }
        }

        if (match) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    


    FAST_IO;
    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        solve();
    }
    
    return 0;
}


