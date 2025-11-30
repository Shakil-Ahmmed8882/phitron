#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int xor_sum = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        xor_sum ^= a[i];
    }
    //... 
    if (n % 2 == 1) {
        cout << xor_sum << "\n";
    } else {
        if (xor_sum == 0) {
            cout << "0\n";
        } else {
            cout << "-1\n";
        }
    }
}

int main()
{
    FAST_IO;
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}