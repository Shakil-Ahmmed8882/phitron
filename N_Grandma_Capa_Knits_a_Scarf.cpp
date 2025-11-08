#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


int check_removalsss(const string& s, char remove_char) {


    int n = s.length();
    int l = 0;
    int r = n - 1;
    int removalsss = 0;




    while (l <= r) {
        if (s[l] == s[r]) {
            
            l++;
            r--;
        } else {
            
            if (s[l] == remove_char) {
                
                removalsss++;
                l++;
            } else if (s[r] == remove_char) {
                
                removalsss++;
                r--;
            } else {
                
                
                return -1;
            }
        }
    }

    return removalsss;
}




void solve()
{


    int n;
    cin >> n;
    string s;
    cin >> s;

    
    
    int min_removalsss = INT_MAX;
    for (char c = 'a'; c <= 'z'; ++c) {
        int removalsss = check_removalsss(s, c);

        if (removalsss != -1) {
            
            min_removalsss = min(min_removalsss, removalsss);
        }
    }

    
    
    if (min_removalsss == INT_MAX) {
        cout << -1 << "\n";
    } else {
        cout << min_removalsss << "\n";
    }
}


int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}