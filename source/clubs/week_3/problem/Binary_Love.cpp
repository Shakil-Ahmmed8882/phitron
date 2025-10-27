
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO  ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST_IO;

    
    int t; 
    cin >> t;

    while (t--) {
        int n;        
        string s;     
        cin >> n >> s;

        int count_01 = 0; 
        int count_10 = 0; 

        

        
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                count_01++;
            } else if (s[i] == '1' && s[i + 1] == '0') {
                count_10++;
            }
        }


        
        if (count_01 == count_10 && count_01 > 0) {
            cout << "Alice\n";
        }
        
        else if (abs(count_01 - count_10) == 1 && min(count_01, count_10) > 0) {
            cout << "Alice\n";
        }
        
        else {
            cout << "Bob\n";
        }
    }


    return 0;
}